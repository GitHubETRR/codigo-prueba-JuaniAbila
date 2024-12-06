#include <stdio.h>
float const centApulg=2.54;
float const centApie=30.48;

int main()
{
    float CM;
    float Pies;
    float Pulgadas;
    printf("Bienvenido usuario\n");
    printf("Este es un programa para pasar de centimetros a pulgadas y pies\n");
    printf("Necesito que ingreses el valor de tu medida en centimetros\n");
    scanf("%f",&CM);
    printf("Tu valor en centimetros es: %fcm \n",CM);
    Pies=(CM/centApie);
    Pulgadas=(CM/centApulg);
    printf("Tu longitud es:\n %f en pulgadas\n %f en pies",Pulgadas,Pies);
    return 0;
}
