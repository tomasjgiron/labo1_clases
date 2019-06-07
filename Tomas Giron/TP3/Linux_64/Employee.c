#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"
#include "arraynuevo.h"

static int generarId(void);

Employee* employee_new()
{
    return (Employee*) malloc(sizeof(Employee));
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* per=employee_new();
    if(per!=NULL)
    {
        employee_setIdStr(per,idStr);
        employee_setNombre(per,nombreStr);
        employee_setSueldoStr(per,sueldoStr);
        employee_setHorasTrabajadasStr(per,horasTrabajadasStr);
    }
    return per;
}

int employee_delete(Employee* this)
{
    int retorno = -1;
    if(this != NULL)
    {
        free(this);
        retorno = 0;
    }
    return retorno;
}

int employee_setIdStr(Employee* this, char* value)
{
    int auxId;
    int retorno = -1;
    if(this != NULL && isNumberInt(value))
    {
        auxId = atoi(value);
        employee_setIdInt(this,auxId);
        retorno = 0;
    }
    return retorno;
}

int employee_setIdInt(Employee* this, int value)
{
    int retorno = -1;
    if(value >= 0)
    {
        this->id = value;
        retorno = 0;
    }
    return retorno;
}


int employee_setSueldoStr(Employee* this, char* value)
{
    int auxSueldo;
    int retorno = -1;
    if(this != NULL && isNumberInt(value))
    {
        auxSueldo = atoi(value);
        employee_setSueldoInt(this,auxSueldo);
        retorno = 0;
    }
    return retorno;
}

int employee_setSueldoInt(Employee* this, int value)
{
    int retorno = -1;
    if(value >= 1 || value <= 100000)
    {
        this->sueldo = value;
        retorno = 0;
    }
    return retorno;
}

int employee_setNombre(Employee* this, char* value)
{
    int retorno = -1;
    if(this != NULL && isLetter(value))
    {
        strncpy(this->nombre,value,sizeof(this->nombre));
        retorno = 0;
    }
    return retorno;
}

int employee_setHorasTrabajadasStr(Employee* this, char* value)
{
    int auxHoras;
    int retorno = -1;
    if(this != NULL && isNumberInt(value))
    {
        auxHoras = atoi(value);
        employee_setHorasTrabajadasInt(this,auxHoras);
        retorno = 0;
    }
    return retorno;
}

int employee_setHorasTrabajadasInt(Employee* this, int value)
{
    int retorno = -1;
    if(value >= 1 || value <= 500)
    {
        this->horasTrabajadas = value;
        retorno = 0;
    }
    return retorno;
}

int employee_getId(Employee* this, int* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        *value = this->id;
        retorno = 0;
    }
    return retorno;
}

int employee_getSueldo(Employee* this, int* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        *value = this->sueldo;
        retorno = 0;
    }
    return retorno;
}

int employee_getHorasTrabajadas(Employee* this, int* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        *value = this->horasTrabajadas;
        retorno = 0;
    }
    return retorno;
}


/*int employee_getEdad(Employee* this, int* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        *value = this->edad;
        retorno = 0;
    }
    return retorno;
}*/

int employee_getNombre(Employee* this, char* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        strncpy(value,this->nombre,sizeof(this->nombre));
        retorno = 0;
    }
    return retorno;
}

/*int employee_getApellido(Employee* this, char* value)
{
    int retorno = -1;
    if(this != NULL)
    {
        strncpy(value,this->apellido,sizeof(this->apellido));
        retorno = 0;
    }
    return retorno;
}*/

/*int employee_addEmployee(Employee* arrayEmployee[],int lenEmployee,char* msgE,int tries)
{
    int indexFree;
    char bufferName[32];
    char bufferApellido[32];
    char bufferEdad[32];
    char nombre[32];
    char apellido[32];
    int edad;
    int retorno=-1;
    if(lenEmployee>0)
    {
        indexFree=employee_findFree(arrayEmployee,lenEmployee);
        if(indexFree!=-1)
        {
            if((!getStringLetras(bufferName,"\nIngrese Nombre: ",msgE,tries))
                    &&(!getStringLetras(bufferApellido,"\nIngrese Apellido: ",msgE,tries))
                       &&(!getStringNumeros(bufferEdad,"\nIngrese Edad: ",msgE,tries)))
            {
                arrayEmployee[indexFree]=employee_newParametros(bufferName,
                                                               bufferApellido,
                                                               bufferEdad);
                employee_setId(arrayEmployee[indexFree],generarId());
                employee_getNombre(arrayEmployee[indexFree],nombre);
                employee_getApellido(arrayEmployee[indexFree],apellido);
                employee_getEdad(arrayEmployee[indexFree],&edad);
                printf("\nSe dio de alta a:\n"
                        "Nombre: %s\nApellido: %s\n"
                        "Edad: %d\n",
                        nombre,
                        apellido,
                        edad);


                retorno=0;
            }
        }

    }
    return retorno;
}*/

int employee_initArray(Employee* arrayPer[],int lenPer)
{
    int i;
    int retorno=-1;
    if(arrayPer!=NULL&&lenPer>0)
    {
        for(i=0; i<lenPer; i++)
        {
            arrayPer[i]=NULL;
        }
        retorno=0;

    }
    return retorno;
}

int employee_findFree(Employee* arrayEmployee[], int lenEmployee)
{
    int i;
    int ret=-1;
    if(arrayEmployee!=NULL && lenEmployee>0)
    {
        for(i=0; i<lenEmployee; i++)
        {
            if(arrayEmployee[i]==NULL)
            {
                ret=i;
                printf("\n----Se encontro lugar libre----\n");
                break;
            }
        }
    }
    return ret;
}

static int idPer=0;
static int generarId(void)
{
    return idPer++;
}
static void setIdInicial(int val)
{
    idPer=val;
}

