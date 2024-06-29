#include <stdio.h>
#define SALIR (-1)

int Derivate(int Coeficiente, int Exponente);
int Sign(int Number);
void gradocero(void);
void primergrado(void);
void segundogrado(void);
void tercergrado(void);

int main()
{
   int Grado;
   printf("Bienvenido a este programa para calcular las derivadas de funciones polinomicas\n");
   do{
      printf("Necesito que me digas que tipo de funcion queres derivar\n");
      printf("Ingresa el grado correspondiente de tu funcion (0, 1, 2, o 3 o -1 para salir):\n");
      scanf("%d", &Grado);
      switch(Grado){
         case 0: 
            primergrado(); 
            break;
         case 1:
            primergrado();
               break;
         case 2:
            segundogrado();
            break;
         case 3: 
            tercergrado();
            break;
         default:
            printf("Grado no reconocido. Por favor ingresa un grado entre 0 y 3.\n");
            break;
         
      }
   }while(Grado!=SALIR)
}

void gradocero(){
   int C;
   printf("Ingresa tu recta constante (C):\n");
   scanf("%d", &C);
   printf("Tu funcion es y = %d\n", C);
   printf("La derivada de tu funcion es y = 0\n");
}

void primergrado(){
   int C,M;
   printf("Ingresa el valor de la pendiente de tu funcion:\n");
   scanf("%d", &M);
   printf("Ingresa tu ordenada al origen:\n");
   scanf("%d", &C);
   Signo=(C>=0)?'+':' ';
   printf("Tu funcion es f(x) = %dx %c %d\n", M,Signo , C);
   printf("La derivada de tu funcion es una recta paralela al eje x = \n", M);
   
}

void segundogrado(){
   printf("Ingresa el valor de tu coeficiente principal (A):\n");
   scanf("%d", &A);
   printf("Ingresa el valor de tu coeficiente lineal (M):\n");
   scanf("%d", &M);
   printf("Ingresa tu ordenada al origen (C):\n");
   scanf("%d", &C); 
   Sign1=M>0?'+':'-';
   Sign2=C>0?'+':'-'; 
   printf("Tu funcion es f(x) = %dx^2 %c %dx %c %d\n", A,'Sign1', M,'Sign2', C);
   int derivadoA = Derivate(A, 2);
   printf("La derivada de tu funcion es f'(x) = %dx %c %d\n", derivadoA, 'Sign1', M);
}

void tercergrado(){
   printf("Ingresa el valor de tu coeficiente principal (D):\n");
   scanf("%d", &D);
   printf("Ingresa el valor de tu coeficiente cuadratico (A):\n");
   scanf("%d", &A);
   printf("Ingresa el valor de tu coeficiente lineal (M):\n");
   scanf("%d", &M);
   printf("Ingresa tu ordenada al origen (C):\n");
   scanf("%d", &C);
   printf("Tu funcion es f(x) = %dx^3 + %dx^2 + %dx + %d\n", D, A, M, C);
   int derivadoD = Derivate(D, 3);
   int derivadoA = Derivate(A, 2);
   printf("La derivada de tu funcion es f'(x) = %dx^2 + %dx + %d\n", derivadoD, derivadoA, M);
   
}
int Derivate(int Coeficiente, int Exponente)
{
   return Coeficiente * Exponente;
}
int Sign(int Number)
{
   if(Number>0 && M!=0) return '+';
   else if(Number<0 && M!=0) return '-';
   else return 0;
}

void DerivaPoly(){

   for(;Grado!=0;Grado--){
      Derivate()
   }
}