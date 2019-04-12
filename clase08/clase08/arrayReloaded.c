#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayReloaded.h"


int utn_getString(char* pResultado,
                    char* msg,
                    char* msgError,
                    int minimo,
                    int maximo,
                    int reintentos)
{
    char bufferStr[4000];

    printf("%s",msg);
    fgets(bufferStr,sizeof(bufferStr),stdin);
    bufferStr[strlen(bufferStr) - 1] = '\0';

    // validar ?¿
    strncpy(pResultado,bufferStr,20);


    return 0;
}

int utn_isValidIntNumber(char* cadena)
{
    int i = 0;
    int ret = 1;

    if(cadena[i] == '-')
    {
        i++;
    }
    for(;cadena[i] != '\0'; i++)
    {
        if(cadena[i] < '0' || cadena[i] > '9')
        {
            ret = 0;
            break;
        }

    }
    return ret;
}

int utn_getNumber(int* pResultado,
                    char* msg,
                    char* msgError,
                    int minimo,
                    int maximo,
                    int reintentos)
{
    int ret = -1;
    char bufferStr[4000];
    int bufferInt;

    if(pResultado != NULL &&
        reintentos >= 0) //FALTAN LOS DEMAS
    {
        if(!utn_getString(bufferStr,msg,msgError,1,6,1) &&
            utn_isValidIntNumber(bufferStr))// maximo y minimo van a estar determinados por la funcion principal
        {
            bufferInt = atoi(bufferStr);
            if(bufferInt >= minimo && bufferInt <= maximo)
            {
                *pResultado = bufferInt;
                ret = 0;
            }
        }
    }

    return ret;
}

int utn_searchFreeSpace(char pArray[][20],int limit, int* pIndex)
{
    int i;
    int ret = -1;

    for(i = 0; i < limit; i++)
    {
        if(pArray[i][0] == '\0')
        {
            *pIndex = i;
            ret = 0;
            break;
        }
    }

    return ret;
}

int utn_searchName(char* pNombre,char pArray[][20],int limit,int* pIndex)
{
    int i;
    int ret = -1;
    for(i = 0;i < limit;i++)
    {
        if(strcmp(pNombre,pArray[i]) == 0)
        {
            *pIndex = i;
            ret = 0;
            break;
        }
    }
    return ret;
}
