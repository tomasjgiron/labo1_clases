#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* fp, LinkedList* pArrayListEmployee)
{
    Employee* pEmployee;
    int cantidad;
    char aux[512];
    char auxId[512];
    char auxNombre[512];
    char auxApellido[512];
    char auxEdad[512];
    //int max;


    if(fp != NULL)
    {
        printf("1\n");
        fgets(aux,512,fp); ///saltea linea

        do
        {
            cantidad = fscanf(fp,"%[^,],%[^,],%[^,],%[^\n]\n",auxId,auxNombre,auxApellido,auxEdad);
            if(cantidad == 4)
            {
                    printf("2\n");
/*
                pEmployee = employee_newParametros(auxId,auxNombre,auxApellido,auxEdad);
                if(pEmployee != NULL)
                {
                        printf("3\n");

                    ll_add(pArrayListEmployee,pEmployee);
                    /*if(atoi(auxId) > max)
                    {
                        max = atoi(auxId);
                    }*/
                  /*
                }
                */
            }
        }while(!feof(fp));
    }

    //setIdInicial(max);
    return 0;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
