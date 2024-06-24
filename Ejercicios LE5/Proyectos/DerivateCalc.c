#include <math.h>
#include <stdio.h>

int Derivate(int)

int main()
{
   int D, A, M, C, Coeficiente, Aux, Control, Flag;
   printf("Bienvenido a este programa para calcular las derivadas de funciones polinomicas\n");
   while(TRUE)
   {
      printf("Necesito que me digas que tipo de funcion queres derivar\n");
      printf("Ingresa el grado correspondiente de tu funcion\n")
      scanf("%d", &Flag);
         switch(Flag)
            case 0: 
            { 
               printf("Ingresa tu recta");
               scanf("%d", &C);
               printf("Tu funcion es y= %d", C);
               printf("La derivada de tu funcion es y=0\n");
                  break;
            }
            case 1:
            {
               printf("Ingresa el valor de la pendiente de tu funcion\n");
               scanf("%d", &M);
               printf("Ingresa tu ordenada al origen \n");
               scanf("%d", &C);
               printf("Tu funcion es f(x)=%dx + %d \n", M, C);
               printf("La derivada de tu funcion es f(x)=%d , es una recta paralela al eje x \n", M)
                  break;
            }
            case 2:
            {
               Coeficiente=2
               printf("Ingresa el valor de tu coeficiente principal\n");
               scanf("%d", &A);
               printf("Ingresa el valor de tu coeficiente lineal\n");
               scanf("%d", &M);
               printf("Ingresa tu ordenada al origen \n");
               scanf("%d", &C);
               printf("Tu funcion es f(x)=%dx^2 + %dx + %d \n", A, M, C);
               Coeficiente=A;
               A=Derivate(Coeficiente, Control);
               if(M=0)
               {
                  printf("La derivada de tu funcion es f(x)=%dx\n", A);
               } else if(M>0)
               {
                  printf("La derivada de tu funcion es f(x)= %dx + %d\n", A, M);
               } else if(M<0)
               {
                  printf("La derivada de tu funcion es f(x)= %dx - %d\n", A, -M);
               }
            }
            case 3: 
               Coeficiente=3
               printf("Ingresa el valor de tu coeficiente principal");
               scanf("%d", D);
               printf("Ingresa el valor de tu coeficiente cuadratico");
               scanf("%d", A);
               printf("Ingresa el valor de tu coeficiente lineal");
               scanf("%d", M);
               printf("Ingresa tu ordenada al origen ");
               scanf("%d", C);
               printf("Tu funcion es f(x)=%dx^3 + %dx^2 + %dx + %d", D, A, M, C);
               for(Control=0;Control!=3;Control++)
               {
                  switch(Flag)
                     case 1: 
                     {
                        D=Coeficiente
                        D=Derivate(Coeficiente,Control);
                           break;
                     }
                     case 2:
                     {
                        A=Coeficiente
                        A=Derivate(Coeficiente,Control);
                           break;
                     }
               }
   }
}


int Derivate(int Coeficiente, int Control)
{
   return Coeficiente*Control
}

