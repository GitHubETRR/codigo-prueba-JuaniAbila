#include <stdio.h>
#include <stdlib.h>

#define MAX_COEF 100
#define MAXNUM 200 
#define SALIR 99

int EnterPoly(int []);
int EnterPolyMat(int [][])
void PrintPoly(int [],int);


void DerivatePoly(int [],int [],int);
void Suma(void);
void Request(int );

int DerivateSector(void);
void SumSector(void);

void Welcome(void);

int main (void)
{
   char Select;
   Welcome();
   scanf("%c",&Select);
   
   switch(Select)
   {
      case '+':
         SumSector();
            break;
      case '-':
         //to do
            break;
      case '*':
         //to do
            break;
      case '/':
         //to do
            break;
      case 'd':
         DerivateSector();
            break;
}
}
//Function definitions
int DerivateSector(void) //Principal derivation function
{
   int Grade=0;
   int Coefficient[MAX_COEF];
   int CoefficientDerivate[MAX_COEF];
   printf("Bienvenido a este sector para calcular funciones derivadas\n"); 
   Grade=EnterPoly(Coefficient);
   DerivatePoly(Coefficient,CoefficientDerivate,Grade);
   printf("Tu funciones son:\n")
   PrintPoly(Coefficient,Grade);
   PrintPoly(CoefficientDerivate,Grade-1);
}
void PrintPoly(int Coefficient[],int Grade)
{
   char Sign;
   Grade-=2;
   Sign=Coefficient[Grade]<0?'-':' ';
   printf
   if(Coefficient[Grade]!=0)printf(" %c %dX^%d ",Sign,abs(Coefficient[Grade]),Grade); 
   Grade--;
   for(;Grade!=0;Grade--)
   {
      Sign=Coefficient[Grade]>0?'+':'-';
      if(Coefficient[Grade]!=0)printf(" %c %dX^%d ",Sign,abs(Coefficient[Grade]),Grade);
   }
   printf(" + %d \n",Coefficient[Grade]);
}

int EnterPoly(int Coefficient[])
{
   int Coeficiente,Grade=0;
   do
   { 
   Request(Grade);
   scanf("%d",&Coeficiente);
   Coefficient[Grade++]=Coeficiente;
   }while(Coeficiente!=SALIR);
   return Grade;
}

void DerivatePoly(int Coefficient[],int CoefficientDerivate[],int Grade)
{
   int i;
   for(i=0;i!=Grade;i++)
   {
      CoefficientDerivate[i]=Coefficient[i+1]*(i+1);
   }
}
void Request(int Grade)
{
   switch (Grade)
   {
         case 0:
            printf("Ingrese la ordenada al origen de su funcion: ");
               break;
         case 1:
            printf("Ingrese la pendiente de su funcion: ");
               break;
         case 2:
            printf("Ingrese el coeficiente cuadratico de su funcion: ");
               break;
         case 3:
            printf("Ingrese el coeficiente cubico de su funcion: ");
               break;
         default:
            printf("Ingrese el coeficiente de grado %d: ",Grade);
               break;
   }
}
void Welcome(void)
{
   printf("Bienvenido a esta calculadora\n");
   printf("¿Que tipo de calculo queres hacer?\n");
   printf("Ingresa cada caracter respectivamente\n");
   printf("Sumar: +  Restar: -   Multiplicar: *   Dividir: /\n");
   printf("Derivar: d\n");
}
//tutuca estuvo aqui
void SumSector(void)
{
   int i;
   int Number[2][MAXNUM];
   printf("Bienvenido a esta calculadora\n ");
   printf("¿Que tipo de suma quieres hacer?\n");
   printf("Si quieres hacer una suma de polinomios ingresa 1\nSi quieres sumar numeros ingresa 2\nSi quieres sumar numeros complejos ingresa un 3");
   scanf("%d",&i);
   switch (i)
   {
      case: 1
         printf("Ingresa tus numeros a sumar");
         EnterPolyMat()
   }
}
int EnterPolyMat(int Num[][])
{
   printf("Ingresa ")
}
void Suma(void)
{
   int NumIn=0, int NumOut=0; int i=0;
   char Signo;
   do
   {   
   printf("Ingresa numeros, el resultado de tu suma se va a ver reflejado luego de cada adicion");
   for(;;)
   {
      scanf("%d",&NumIn);
      Signo=NumIn>0?'+':'-';
      printf("%d %c %d: ",NumOut, Signo,abs(NumIn));
      NumOut=NumIn+NumOut;
      if(NumIn) break;
      printf("%d",NumOut);      
   }
   printf("El resultado de tu suma es: %d\n", NumOut);
   printf("Si quieres salir del sector de suma ingresa un 0")
   scanf("%d",&i);
   } while(i)
}