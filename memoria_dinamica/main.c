#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "arraynuevo.h"
#define LEN_PERSONA 50
#define TRIES 3
#define LEN_FOR 3

int main()
{
    Persona* arrayPersonas[LEN_PERSONA];
    int i;
    persona_initArray(arrayPersonas,LEN_PERSONA);
    for(i=0;i<LEN_FOR;i++)
    {
        persona_addPersona(arrayPersonas,LEN_PERSONA,"Error en el alta",TRIES);
        ///usar los gets en el alta y printf

    }





    return 0;
}
