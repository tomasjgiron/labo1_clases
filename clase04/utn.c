#include <stdio.h>

void pruebita(void)
{
    printf("hola Mundo desde utn.c\n");

}

int utn_getNumber(int* pNumber, int max, int min, char* msg, char* msgError, int tries)
{
    int number;
    int ret = -1;

    while(tries>0)
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            if (number>min && number<max)
            {
                *pNumber = number;
                ret = 0;
                break;
                //ok
            }
    }
    printf("%s\n", msgError);
    //mal
    tries--;
}
return ret;
}
