#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define LEN_NAME 30
#define LEN_SURNAME 30

typedef struct
{
    int idPersona;
    char name[LEN_NAME];
    char surname[LEN_SURNAME] ;
    int edad;

}Persona;

Persona* persona_new();///malloc
int persona_delete(Persona* this);///free

Persona* persona_newParametros(int id,char* edad,char* surname,char* name);///CONSTRUCTOR


int alumno_setId(Persona* this,int id);///setter
int alumno_setEdad(Persona* this,char* edad);///setter
int alumno_setSurname(Persona* this,char* surname);///setter
int alumno_setName(Persona* this,char* name);///setter

int alumno_getId(Persona* this,int* pId);///getter
int alumno_getEdad(Persona* this,int* pEdad);///getter
int alumno_getSurname(Persona* this,char* pSurname);///getter
int alumno_getName(Persona* this,char* pName);///getter

int persona_initArray(Persona* pPersonas[], int len);
int persona_searchFreeSpace(Persona* pPersonas[], int len);
int persona_addPersona(Persona* pPersonas[],int len,char* msgE,int tries);


#endif // PERSONA_H_INCLUDED
