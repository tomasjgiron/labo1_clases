#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define QTY_ARRAYPER 1000

int main()
{
    int cant;
    int i;

    Persona* arrayPersona[QTY_ARRAYPER];
    persona_initArray(arrayPersona,QTY_ARRAYPER);
    cant=parser(arrayPersona,QTY_ARRAYPER,"data.csv");

    for(i=0;i<QTY_ARRAYPER;i++)
    {
        printf("%d %s\n",arrayPersona[i]->id,arrayPersona[i]->nombre);
    }

    return 0;
}
