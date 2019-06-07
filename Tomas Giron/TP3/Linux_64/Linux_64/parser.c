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
    int max;

    printf("entramos al parser");
    if(fp != NULL)
    {
        fgets(aux,512,fp); ///saltea linea

        do
        {
            cantidad = fscanf(fp,"%[^,],%[^,],%[^,],%[^\n]\n",auxId,auxNombre,auxApellido,auxEdad);
            if(cantidad == 4)
            {
                pEmployee = employee_newParametros(auxId,auxNombre,auxApellido,auxEdad);
                if(pEmployee != NULL)
                {
                    ll_add(pArrayListEmployee,pEmployee);
                    /*if(atoi(auxId) > max)
                    {
                        max = atoi(auxId);
                    }*/
                }
            }
        }while(feof(fp) == 0);
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
