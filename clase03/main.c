#include <stdio.h>
#include <stdlib.h>

int pedirNumerosDoWhile(void);
int pedirNumerosIf(void);
int main()
{
    //pedirNumerosDoWhile();
    pedirNumerosIf();
    return 0;
}

int pedirNumerosDoWhile(void)
{
    int maximo;
    int auxiliar;
    int flag = 0;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d",&auxiliar);

        if(auxiliar>maximo || flag == 0)
        {
            maximo=auxiliar;
            flag = 1;
        }

    }
    while(auxiliar != -1);
    printf("El maximo es: %d",maximo);
    return 0;
}
int pedirNumerosIf(void)
{
    int maximo;
    int contador=0;
    int auxiliar;

    do
    {
        printf("Ingresa un numero: ");
        scanf("%d", &auxiliar);

        if(contador==0)
        {
            maximo = auxiliar;
        }
        else
        {
            if(auxiliar>maximo)
            {
                maximo = auxiliar;
            }
        }
        contador++;
    }
    while(auxiliar != -1);
    printf("El maximo es: %d", maximo);

}
