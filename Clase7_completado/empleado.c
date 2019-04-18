#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "empleado.h"

int Employee_initializeArray(Employee* pEmployee, int len, int valor)
{
    int i;
    for(i=0; i<len;i++)
    {
        pEmployee[i].isEmpty = valor;
    }
}

int utn_showArrayInt(Employee* pEmployee,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        printf("%s %s\n",pEmployee[i].name,pEmployee[i].surname);
    }
    return 0;
}

int Employee_create(Employee* pEmployee, int len, int valor, int* pIndex,char* msg, char* msgE)
{
    Employee buffer;
    if(Employee_searchFreeSpace(pEmployee,len,valor,&pIndex)==0)
                {
                    printf("Se encontro lugar en %d\n",pIndex);

                    getStringLetras(buffer.surname,msg,msgE,0,20,1);
                    getStringLetras(buffer.name,msg,msgE,0,20,1);

                    pEmployee[pIndex] = buffer;
                    pEmployee[pIndex].isEmpty = 0;
                }
}

int Employee_searchFreeSpace(Employee* pEmployee, int len, int valor, int *pIndex)
{
    int i;
    int ret=-1;
    for(i=0; i<len ; i++)
    {
        if(pEmployee[i]==valor)
        {
            *pIndex = i;
            ret=0;
            break;
        }
    }
    return ret;
}
