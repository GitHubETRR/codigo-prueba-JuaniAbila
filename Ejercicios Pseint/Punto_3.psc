Algoritmo SumaBinomica
	Escribir "Bem-vindo Usuário"
	// Ahora en portugues
	Escribir 'Este algoritmo para sumar dos numeros complejos'
	Repetir
		Escribir 'Ingresa el valor Real de tu primer numero'
		Leer CoordX1
		Escribir 'Ingresa el valor imaginario de tu primer numero'
		Leer CoordY1
		Si CoordY1>0 Entonces
			Escribir 'Tu primer numero es: ', CoordX1, ' + j', CoordY1
		SiNo
			Escribir 'Tu primer numero es: ', CoordX1, ' -j', ABS(CoordY1)
		FinSi
		Escribir 'Ingresa el valor real de tu segundo numero'
		Leer CoordX2
		Escribir 'Ingresa el valor imaginario de tu segundo numero'
		Leer CoordY2
		Si CoordY2>0 Entonces
			Escribir 'Tu segundo numero es: ', CoordX2, ' + j', CoordY2
		SiNo
			Escribir 'Tu segundo numero es: ', CoordX2, ' -j', ABS(CoorYd2)
		FinSi
		CoordX <- CoordX1+CoordX2
		CoordY <- CoordY1+CoordY2
		Escribir 'Queres ver tu resultado en binomica o polar'
		Escribir 'Si elegiste binomica ingresa un 1 y si quieres polar un 2'
		Leer Control
		Si Control=2 Entonces
			Si CoordY>0 Entonces
				Escribir 'Tu numero complejo es ', CoordX, ' + j', CoordY
			SiNo
				Escribir 'Tu numero complejo es: ', CoordX, ' - j', ABS(CoordY)
			FinSi
		SiNo
			Si CoordX<>0 Y CoordY<>0 Entonces
				Si CoordX>0 Entonces
					// C2 o C3
					Si CoordY>0 Entonces
						// C2
						Cuad <- 0
					SiNo
						// C3
						Cuad <- 270
					FinSi
				SiNo
					// C1 o C4
					Si CoordY>0 Entonces
						// C1
						Cuad <- 90
					SiNo
						// C4
						Cuad <- 180
					FinSi
				FinSi
				ModPol <- rc(CoordX*CoordX+CoordY*CoordY)
				Angpol <- atan(CoordY/CoordX)
				Angpol <- ABS(Angpol)*(180/PI)
				AngPoli <- Angpol+Cuad
			SiNo
				Si CoordX=0 Entonces
					Si CoordY=0 Entonces
						ModPol <- 0
						AngPoli <- 0
					SiNo
						Si CoordY>0 Entonces
							ModPol <- ABS(CoordY)
							AngPoli <- 90
						SiNo
							ModPol <- ABS(CoordY)
							AngPoli <- 270
						FinSi
					FinSi
				SiNo
					Si CoordX>0 Entonces
						ModPol <- ABS(CoordX)
						AngPoli <- 0
					SiNo
						ModPol <- ABS(CoordX)
						AngPoli <- 180
					FinSi
				FinSi
			FinSi
			Escribir 'Tu numero es : ', ModPoli, '*e^j', AngPoli
		FinSi
		Escribir "Si quieres realizar otra suma ingresa un 2, sino ingresa un 1"
		Leer Control
	Hasta Que Control=1
FinAlgoritmo
