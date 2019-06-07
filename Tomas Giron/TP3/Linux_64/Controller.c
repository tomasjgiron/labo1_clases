#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE *fp;
    fp = fopen(path,"r");
    parser_EmployeeFromText(fp,pArrayListEmployee);
    fclose(fp);
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{

    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* fp;
    int i;
    Employee* pEmployee;
    int size;
    int auxId;
    char auxNombre[512];
    int auxSueldo;
    int auxHoras;


    fp = fopen(path,"w");
    if(fp != NULL)
    {
        fprintf(fp,"id,nombre,horasTrabajadas,sueldo\n");

        size = ll_len(pArrayListEmployee);

        for(i=0;i<size;i++)
        {
            pEmployee = ll_get(pArrayListEmployee,i);

            employee_getId(pEmployee,&auxId);
            employee_getNombre(pEmployee,auxNombre);
            employee_getHorasTrabajadas(pEmployee,&auxHoras);
            employee_getSueldo(pEmployee,&auxSueldo);

            fprintf(fp,"%d,%s,%d,%d\n",auxId,auxNombre,auxHoras,auxSueldo);
        }
        fclose(fp);
    }
    return 0;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    FILE* fp;
    int i;
    Employee* pEmployee;
    int size;


    fp = fopen(path,"w");
    if(fp != NULL)
    {


        size = ll_len(pArrayListEmployee);

        for(i=0;i<size;i++)
        {
            pEmployee = ll_get(pArrayListEmployee,i);


        }



        fclose(fp);
    }
    return 1;
}

