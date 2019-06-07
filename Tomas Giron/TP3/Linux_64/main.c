#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "arraynuevo.h"
#include "parser.h"
#define TRIES 3

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int escape = 10;
    int opcion;

    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        printf("\n1.Carga d*****esde texto\n8.Guardar datos en texto\n11.SALIR\n");

        getIntInRange(&opcion,"\nIngrese opcion: ",
                        "Informacion invalida\n",1,escape,TRIES);

        switch(opcion)
        {
            case 1:
                printf("case 1\n");
                controller_loadFromText("data.csv",listaEmpleados);
                printf("salida case 1\n");
                break;
            case 2:
                controller_saveAsText("data.csv",listaEmpleados);
                break;
        }
    }while(opcion != 10);
    return 0;
}
