#include <stdio.h>

int main()
{
    float PrecioKilo;
    float Kilos;
    float Precio;
    printf("Bienvenido a este programa para calcular el precio de determinada mercaderia\n");
    printf("Ingresa el valor por kilo de tu mercaderia\n");
    scanf("%f", &PrecioKilo);
    printf("Ingresa la cantidad de mercaderia en kilos que vas a comprar\n");
    scanf("%f", &Kilos);
    Precio= Kilos*PrecioKilo;
    printf("Vas a tener que gastar %f pesos en tu compra", Precio);
    return 0;
}