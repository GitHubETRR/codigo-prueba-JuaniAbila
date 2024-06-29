#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COEF 100
#define SALIR 99

void PrintPoly(int [],int);
void DerivatePoly(int [],int [],int);
int EnterPoly(int Coefficient[]);

int main (void)
{
   int Grade=0;
   int Coefficient[MAX_COEF];
   int CoefficientDerivate[MAX_COEF];
   printf("Bienvenido a este programa para calcular funciones derivadas\n"); 
   Grade=EnterPoly(Coefficient);
   DerivatePoly(Coefficient,CoefficientDerivate,Grade);
   PrintPoly(Coefficient,Grade);
   PrintPoly(CoefficientDerivate,Grade-1);
   return 0;
}

void PrintPoly(int Coefficient[],int Grade)
{
   char Sign;
   Grade-=2;
   Sign=Coefficient[Grade]<0?'-':' ';
   if(Coefficient[Grade]!=0)printf(" %c %dX^%d ",Sign,Coefficient[Grade],Grade);
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
      printf("Ingrese el coeficiente de grado %d : ",Grade);
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
