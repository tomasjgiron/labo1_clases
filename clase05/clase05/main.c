#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define LIMIT 5
#define MAX 100
#define MIN 0

int main()
{
    int i;
    int numbers [LIMIT];
    utn_getArrayNumberRanged(numbers,LIMIT,MAX,MIN,"Ingrese un numero","Error",3);
    for(i=0;i<LIMIT;i++)
    {
        printf("%d\n",numbers[i]);
    }


    return 0;
}
