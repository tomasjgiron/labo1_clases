#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "arraynuevo.h"


static int generateID(void);

int persona_initArray(Persona* pPersonas[], int len)
{
    int i;

    if(pPersonas != NULL && len > 0)
    {
       for(i=0; i<len;i++)
        {
            pPersonas[i] = NULL;
        }
    }
    return 0;
}

int persona_searchFreeSpace(Persona* pPersonas[], int len)
{
    int i;
    int ret=-1;

    if(pPersonas != NULL && len > 0)
    {
       for(i=0;i<len;i++)
        {
            if(pPersonas[i] == NULL)
            {
                ret = i;
                break;
            }
        }
    }
    return ret;
}

Persona* persona_new()///constructor
{
    return (Persona*) malloc(sizeof(Persona));
}

int persona_delete(Persona* this)///destructor
{
    int ret = -1;
    if(this != NULL)
    {
        free(this);
        ret = 0;
    }
    return ret;
}

int persona_setId(Persona* this,int id)///setter
{
    int ret = -1;
    if(this != NULL && id >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        this->idPersona = id;
        ret = 0;
    }
    return ret;
}

int persona_setEdad(Persona* this,char* edad)///setter
{
    int ret = -1;
    int auxiliarEdad;
    if(this != NULL && edad >= 0)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        auxiliarEdad = atoi(edad);
        this->edad = auxiliarEdad;
        ret = 0;
    }
    return ret;
}

int persona_setSurname(Persona* this,char* surname)///setter
{
    int ret = -1;
    if(this != NULL && surname != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(this->surname,surname,sizeof(this->surname));
        ret = 0;
    }
    return ret;
}

int persona_setName(Persona* this,char* name)///setter
{
    int ret = -1;
    if(this != NULL && name != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(this->name,name,sizeof(this->name));
        ret = 0;
    }
    return ret;
}

int persona_getID(Persona* this,int* pId)///getter
{
    int ret = -1;
    if(this != NULL && pId != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *pId = this->idPersona;
        ret = 0;
    }
    return ret;
}

int persona_getEdad(Persona* this,int* pEdad)///getter
{
    int ret = -1;
    if(this != NULL && pEdad != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        *pEdad = this->edad;
        ret = 0;
    }
    return ret;
}

int persona_getSurname(Persona* this,char* pSurname)///getter
{
    int ret = -1;
    if(this != NULL && pSurname != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(pSurname,this->surname,sizeof(this->surname));
        ret = 0;
    }
    return ret;
}

int persona_getName(Persona* this,char* pName)///getter
{
    int ret = -1;
    if(this != NULL && pName != NULL)///la validacion de value es de acuerdo al parametro que se le pasa
    {
        strncpy(pName,this->name,sizeof(this->name));
        ret = 0;
    }
    return ret;
}

Persona* persona_newParametros(int id,char* edad,char* surname,char* name)///CONSTRUCTOR
{
    Persona* pAuxiliar;
    pAuxiliar = persona_new();
    if(pAuxiliar != NULL)
    {
        persona_setId(pAuxiliar,id);
        persona_setEdad(pAuxiliar,edad);
        persona_setSurname(pAuxiliar,surname);
        persona_setName(pAuxiliar,name);
    }
    return pAuxiliar;
}

int persona_addPersona(Persona* pPersonas[],int len,char* msgE,int tries)
{
    Persona* persona;
    int indexFree;
    char bufferName[50];
    char bufferSurname[50];
    char bufferEdad[10];
    int auxiliarId;
    int ret = -1;

    if(pPersonas != NULL && len > 0)
    {
        indexFree = persona_searchFreeSpace(pPersonas,len);

        if((indexFree >= 0)&& ((getStringLetras(bufferName,"Ingrese nombre: ",msgE,tries) == 0) &&
            (getStringLetras(bufferSurname,"Ingrese apellido: ",msgE,tries) == 0)))
        {
            if((getStringNumerosInt(bufferEdad,"Ingrese edad: ",msgE,tries) == 0))
                {
                    auxiliarId = generateID();
                    persona = persona_newParametros(auxiliarId,bufferEdad,bufferSurname,bufferName);
                    pPersonas[indexFree] = persona;
                    ret = 0;
                }
        }
    }
    return ret;
}

static int generateID(void)
{
    static int idPer = 0;
    return idPer++;
}
