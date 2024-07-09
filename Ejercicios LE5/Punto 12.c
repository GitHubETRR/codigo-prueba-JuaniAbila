#include <stdio.h>

int main()
{
    int años, dias;
    printf("Bienvenido a este programa para calcular tus dias de vida\n");
    printf("Necesito que ingreses tu edad\n");
    scanf("%d",&años);
    dias=años*365;
    printf("Has vivido por %d dias", dias);
    return 0;
}