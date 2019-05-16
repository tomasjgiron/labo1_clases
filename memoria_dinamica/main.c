#include <stdio.h>
#include <stdlib.h>
#define LEN_ALUMNO 5

int main()
{
    Alumno* arrayAlumnos[LEN_ALUMNO];
    Alumno* pAuxiliar;

    pAuxiliar = alumno_new();
    if(pAuxiliar != NULL)
    {
        alumno_setName(pAuxiliar,"Natalia");
        arrayAlumnos[0] = pAuxiliar;
    }



    return 0;
}
