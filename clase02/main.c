#include <stdio.h>
#include <stdlib.h>

int promedioMaximoMinimo()
{
    int maximo;
    int minimo;
    int acumulador;
    int auxiliar;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &auxiliar);
    maximo = auxiliar;
    minimo = auxiliar;
    acumulador = auxiliar;

    for(i=0;i<4;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &auxiliar);
        acumulador+=auxiliar;

        if(auxiliar<minimo)
        {
            minimo=auxiliar;
        }
        if(auxiliar>maximo)
        {
            maximo=auxiliar;
        }
    }
    printf("El maximo es: %d\n", maximo);
    printf("El minimo es: %d\n", minimo);
    printf("El minimo es: %.2f", (float)acumulador / 5);

    return 0;
}

int main()
{
    promedioMaximoMinimo();
    return 0;
}
