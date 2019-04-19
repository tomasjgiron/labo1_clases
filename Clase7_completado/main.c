#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arraynuevo.h"
#include "empleado.h"

#define LEN_LISTA    3

int main()
{
    Employee pibito[LEN_LISTA];
    int posLibre;
    int opcion=0;

    while(opcion!=5)
    {
        getIntInRange(&opcion,
                      "1)ingresar\n2)listar\n4)eliminar\n5)Salir\n",
                      "NO!",
                      1,10,2);
        Employee_initializeArray(pibito,LEN_LISTA);
        switch(opcion)
        {
            case 1:
            {
                if(Employee_searchFreeSpace(pibito,LEN_LISTA,&posLibre) == 0)
                {
                    printf("se encontro lugar en: %d\n",posLibre);
                    Employee_create(pibito,LEN_LISTA,posLibre,"Error");
                    Employee_showArray(pibito,LEN_LISTA);
                }
                break;
            }
            case 2:
            {
                Employee_showArray(pibito,LEN_LISTA);
                break;
            }
            case 4:
            {

                break;
            }
        }
    }

    return 0;
}



