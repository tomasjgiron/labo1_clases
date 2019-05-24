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

int alumno_setId(Alumno* this,int id)///setter
{
    int ret = -1;
    if(this != NULL && id >= 0)///la validacion de id es de acuerdo al parametro que se le pasa
    {
        this->idAlumno = id;
        ret = 0;
    }
    return ret;
}

int alumno_setLegajo(Alumno* this,int legajo)///setter
{
    int ret = -1;
    if(this != NULL && legajo >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->legajo = legajo;
        ret = 0;
    }
    return ret;
}

int alumno_setStatus(Alumno* this,int status)///setter
{
    int ret = -1;
    if(this != NULL && status >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->status = status;
        ret = 0;
    }
    return ret;
}

int alumno_setName(Alumno* this,char* name)///setter
{
    int ret = -1;
    if(this != NULL && name >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(this->name,name,sizeof(this->name));
        ret = 0;
    }
    return ret;
}

int alumno_getID(Alumno* this,int* pId)///getter
{
    int ret = -1;
    if(this != NULL && pId != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *pId = this->idAlumno;
        ret = 0;
    }
    return ret;
}

int alumno_getLegajo(Alumno* this,int* pLegajo)///getter
{
    int ret = -1;
    if(this != NULL && pLegajo != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *pLegajo = this->legajo;
        ret = 0;
    }
    return ret;
}

int alumno_getStatus(Alumno* this,int* pStatus)///getter
{
    int ret = -1;
    if(this != NULL && pStatus != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *pStatus = this->status;
        ret = 0;
    }
    return ret;
}

int alumno_getName(Alumno* this,char* pName)///getter
{
    int ret = -1;
    if(this != NULL && pName != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(pName,this->name,sizeof(this->name));
        ret = 0;
    }
    return ret;
}

Alumno* alumno_newParametros(int id,int legajo,int status,char* name)///CONSTRUCTOR
{
    Alumno* pAuxiliar;
    pAuxiliar = alumno_new();
    if(pAuxiliar != NULL)
    {
        alumno_setId(pAuxiliar,id);
        alumno_setLegajo(pAuxiliar,legajo);
        alumno_setStatus(pAuxiliar,status);
        alumno_setName(pAuxiliar,name);
    }
    return pAuxiliar;
}
