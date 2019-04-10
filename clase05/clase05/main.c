#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define LIMIT 10
#define MAX 100
#define MIN 0

int main()
{
    int max,min,number;
    int numbers [LIMIT];
    float prom;


    utn_getArrayNumberRanged(numbers,LIMIT,MAX,MIN,"Ingrese un numero","Error",3);

    utn_calculateProm(numbers,LIMIT,&prom);
    printf("El promedio es: %.2f\n",prom);
    utn_searchMaxArray(numbers,LIMIT,&max);
    printf("El maximo del array es: %d\n",max);
    utn_searchMinArray(numbers,LIMIT,&min);
    printf("El minimo del array es: %d\n",min);

    utn_searchNumberArray(numbers,LIMIT,&number,"Se encontro el numero","No se encontro el numero");


    return 0;
}
