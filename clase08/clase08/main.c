#include <stdio.h>
#include <stdlib.h>
#include "arrayReloaded.h"
#include <string.h>
#define LEN_LISTA 100

int main()
{
    char nombres [LEN_LISTA][20];
    int i;
    int opcion;
    char seguir = 's';
    int aux;
    char buffer[20];
    int posEliminar;

    for(i = 0;i < LEN_LISTA;i++)
    {
        nombres[i][0] = '\0';
    }

    while(seguir == 's')
    {

        utn_getNumber(&opcion,"1)ingresar\n2)listar\n3)ordenar\n4)borrar\n","error",1,10,2);
        printf("elegiste: %d\n",opcion);
        switch(opcion)
        {
            case 1:
            {
                printf("agregar nombre\n");
                if(utn_searchFreeSpace(nombres,LEN_LISTA,&aux)== 0)
                {
                    printf("se encontro lugar en %d\n",aux);

                    utn_getString(buffer,"Ingrese nombre: ","No",0,20,2);

                    strncpy(nombres[aux],buffer,20);
                }
                break;
            }
            case 2:
            {
                for(i = 0;i<10;i++)
                    {
                        printf("- %d: %s\n",i,nombres[i]);
                    }
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                utn_getString(buffer,"Ingrese nombre: ","No",0,20,2);
                utn_searchName(buffer,nombres,LEN_LISTA,&posEliminar);
                nombres[posEliminar][0] = '\0';
            }


        }

    }





    return 0;
}
