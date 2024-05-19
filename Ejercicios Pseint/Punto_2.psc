Algoritmo PolBin
	Escribir "Benvenuto utente"
	// Lo pusimos en italiano para no poner siempre lo mismo
	Escribir 'Este es un algoritmo para pasar de polar a binomica'
	Repetir
		Escribir 'Necesito que ingreses tu numero en forma polar'
		Escribir 'Ingrese modulo'
		Leer modulo
		Escribir 'Ingrese angulo'
		Leer angulo
		Si modulo<>0 Entonces
			Si modulo<0 Entonces
				modulo <- ABS(modulo)
			FinSi
			Si angulo<>0 O angulo<>90 O angulo<>180 O angulo<>270 O angulo<>360 Entonces
				Si angulo=0 O angulo=360 Entonces
					CoordXeq <- modulo
					CoordYeq <- 0
				SiNo
					Si angulo=90 Entonces
						CoordXeq <- 0
						CoordYeq <- modulo
					SiNo
						Si angulo=180 Entonces
							CoordXeq <- -1*(modulo)
							CoordYeq <- 0
						SiNo
							Si angulo=270 Entonces
								CoordXeq <- 0
								CoordYeq <- -1*(modulo)
							FinSi
						FinSi
					FinSi
				FinSi
			SiNo
				Si angulo>0 Y angulo<90 Entonces
					// C1
					argumento <- angulo
					AuxX <- 1
					AuxY <- 1
				SiNo
					Si angulo>90 Y angulo<180 Entonces
						// C2
						argumento <- angulo-90
						AuxX <- -1
						AuxY <- 1
					SiNo
						Si angulo>180 Y angulo<270 Entonces
							// C3
							argumento <- angulo-180
							AuxX <- -1
							AuxY <- -1
						SiNo
							Si angulo>270 Y angulo<360 Entonces
								// C4
								argumento <- angulo-270
								AuxX <- 1
								AuxY <- -1
							FinSi
						FinSi
					FinSi
				FinSi
				// Los "Aux" son variables de apoyo que utilizamos para definir si las cordenadas tienen que ser negativas o positivas
				CoordX <- cos(argumento)*modulo
				CoordY <- sen(argumento)*modulo
				CoordXeq <- CoordX*AuxX
				CoordYeq <- CoordY*AuxY
			FinSi
			Si CoordYeq<0 Entonces
				Escribir 'Tu forma binomica es: ', CoordXeq, ' - j', ABS(CoordYeq)
			SiNo
				Escribir 'Tu forma binomica es: ', CoordXeq, ' + j', CoordYeq
			FinSi
		SiNo
			Escribir 'Tu forma binomicaes: ( 0 ; 0 ), es solo un punto'
		FinSi
		Escribir 'Si quieres hacer otro pasaje ingresa un 1'
		Leer Control
	Mientras Que Control=1
FinAlgoritmo
