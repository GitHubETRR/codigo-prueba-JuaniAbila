Algoritmo Punto_5
	Escribir "Bienvenue á l`utilisateur"
	// Frances, deci que eran 5 puntos porque me quedaba sin ideas
	Escribir 'Este es un algoritmo que te dice la resistencia en funcion de los fasores de la corriente, la tension y la frecuencia'
	Repetir
		Escribir 'Ingrese el modulo de la corriente'
		Leer I
		Escribir 'Ingrese su angulo'
		Leer Iang
		Escribir 'Ingrese el modulo de la tension'
		Leer V
		Escribir 'Ingrese su angulo'
		Leer Vang
		Rv <- V*cos(Vang)
		jv <- V*sen(Vang)
		Ri <- I*cos(Iang)
		ji <- I*sen(Iang)
		j <- jv-ji
		R <- Rv/Ri
		Escribir 'La parte real es', R
		Escribir 'La imaginaria es', j
		Escribir 'Ingrese la frecuencia'
		Leer Hz
		w <- (2*pi)*F
		Si j<=0 Entonces
			C <- -1/(w*j)
			Si C=0 Entonces
				Escribir 'No hay capacitor'
			SiNo
				Escribir 'La capacitancia es: ', C, ' Faradios'
			FinSi
		SiNo
			L <- (w*j)
			Si L=0 Entonces
				Escribir 'No hay inductor'
			SiNo
				Escribir 'La inductancia es: ', L, ' Henries'
			FinSi
		FinSi
		Escribir 'La resistencia es: ', R, ' Ohms'
		Escribir 'Si queres realizar la operacion devuelta ingresa un 1'
		Leer Control
	Mientras Que Control=1
FinAlgoritmo
