Algoritmo BinPol
	Escribir "Bienvenido usuario"
	Escribir 'Este es un algoritmo para pasar de binomica a polar'
	Repetir
		Escribir 'Ingresa los valores de tus componentes'
		Escribir 'Ingresa tu valor X, real'
		Leer CoordX
		Escribir 'Ingresa tu valor j, imaginario'
		Leer CoordY
		Si CoordY<>0 Entonces
			Si CoordY>0 Entonces
				Escribir 'Tu numero complejo es ', CoordX, ' + j', CoordY
			SiNo
				Escribir 'Tu numero complejo es: ', CoordX, ' - j', ABS(CoordY)
			FinSi
		FinSi
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
		Escribir 'Tu forma polar es: ', ModPol, '*e^j', AngPoli
		Escribir 'Si queres hacer otro pasaje ingresa un 1'
		Leer Control
	Mientras Que Control=1
FinAlgoritmo
