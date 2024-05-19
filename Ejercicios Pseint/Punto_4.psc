Algoritmo CapInd
	Escribir "Willkommener Benutzer"
	// Aleman, claramente con traductor
	Escribir 'Algoritmo para saber el valor del capacitor o inductor relacionado'
	Repetir
		Escribir 'Ingresa la parte real'
		Leer A
		Escribir 'Ingresa la parte imaginaria'
		Leer Bj
		Escribir 'La impedancia va a ser...'
		Si Bj>0 Entonces
			Escribir 'Z = ', A, ' + j', Bj
		SiNo
			Escribir 'Z = ', A, ' - j', Bj
		FinSi
		Escribir 'Ingresa también la frecuencia'
		Leer Hz
		omega <- (2*pi)*Hz
		Si Bj<=0 Entonces
			C <- -1/(omega*Bj)
			Si C=0 Entonces
				Escribir 'No hay capacitor relacionado'
			SiNo
				Escribir 'El valor de la Capacitancia es: ', C, ' Faradios'
			FinSi
		SiNo
			L <- omega*Bj
			Si L=0 Entonces
				Escribir 'No hay inductor relacionado'
			SiNo
				Escribir 'El valor de la inductancia es: ', L, ' Henries'
			FinSi
		FinSi
		Escribir 'Si queres sacar otro valor ingresa un 1'
		Leer Control
	Mientras Que Control=1
FinAlgoritmo
