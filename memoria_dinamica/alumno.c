#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

Alumno* alumno_new()///constructor
{
    return (Alumno*) malloc(sizeof(Alumno));
}

int alumno_delete(Alumno* this)///destructor
{
    int ret = -1;
    if(this != NULL)
    {
        free(this);
        ret = 0;
    }
    return ret;
}

int alumno_setId(Alumno* this,int value)///setter
{
    int ret = -1;
    if(this != NULL && value >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->id = value;
        ret = 0;
    }
    return ret;
}

int alumno_setLegajo(Alumno* this,int value)///setter
{
    int ret = -1;
    if(this != NULL && value >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->legajo = value;
        ret = 0;
    }
    return ret;
}

int alumno_setStatus(Alumno* this,int value)///setter
{
    int ret = -1;
    if(this != NULL && value >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->status = value;
        ret = 0;
    }
    return ret;
}

int alumno_setName(Alumno* this,char* value)///setter
{
    int ret = -1;
    if(this != NULL && value >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(this->name,value,sizeof(value));
        ret = 0;
    }
    return ret;
}


int alumno_getID(Alumno* this,int* value)///getter
{
    int ret = -1;
    if(this != NULL && value != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *value = this->id;
        ret = 0;
    }
    return ret;
    return 0;
}

int alumno_getLegajo(Alumno* this,int* value)///getter
{
    int ret = -1;
    if(this != NULL && value != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *value = this->legajo;
        ret = 0;
    }
    return ret;
    return 0;
}
int alumno_getStatus(Alumno* this,int* value)///getter
{
    int ret = -1;
    if(this != NULL && value != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *value = this->status;
        ret = 0;
    }
    return ret;
    return 0;
}
int alumno_getName(Alumno* this,char* value)///getter
{
    int ret = -1;
    if(this != NULL && value != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(value,this->name,sizeof(this->));
        ret = 0;
    }
    return ret;
    return 0;
}


Alumno* alumno_newParametros(int id,int legajo,int status,char* name)///CONSTRUCTOR
{
    Alumno* pAuxiliar;
    pAuxiliar = alumno_new();
    return 0;
}

