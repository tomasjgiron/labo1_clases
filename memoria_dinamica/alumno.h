#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#define LEN_NAME 50

typedef struct
{
    int idAlumno;
    char nombre[LEN_NAME];
    int legajo;
    int status;

}Alumno;

Alumno* alumno_new();///malloc
int alumno_delete(Alumno* this);///free

Alumno* alumno_newParametros(int id,int legajo,int status,char* name);///CONSTRUCTOR


int alumno_setId(Alumno* this,int value);///setter
int alumno_setLegajo(Alumno* this,int value);///setter
int alumno_setStatus(Alumno* this,int value);///setter
int alumno_setName(Alumno* this,char* value);///setter

int alumno_getId(Alumno* this,int* value);///getter
int alumno_getLegajo(Alumno* this,int* value);///getter
int alumno_getStatus(Alumno* this,int* value);///getter
int alumno_getName(Alumno* this,char* value);///getter





///funcion de construccion (CONSTRUCTOR)
///funcion de borrado (
///funcion seteo nombre
///funcion para obtener el nombre y devolverlo ¿?
    /// suele usarse para hacer conversiones (temperatura medida)

///
#endif // ALUMNO_H_INCLUDED
