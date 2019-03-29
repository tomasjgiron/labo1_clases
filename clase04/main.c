#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int main()
{
    int num;
    utn_getNumber(&num,100,0,"Ingrese un numero del 0 al 100: ","Error. ",3);
    if(num>0 && num<100)
    {
        printf("Es correcto. El numero ingresado es: %d\n",num);
    }
    return 0;
}
