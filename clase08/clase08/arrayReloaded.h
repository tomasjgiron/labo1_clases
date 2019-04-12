#ifndef ARRAYRELOADED_H_INCLUDED
#define ARRAYRELOADED_H_INCLUDED

int utn_getString(char* pResultado,char* msg,char* msgError,int minimo,int maximo,int reintentos);

//a partir de esta funcion puedo crear muchas otras de validacion
int utn_isValidIntNumber(char* cadena);

int utn_getNumber(int* pResultado,char* msg,char* msgError,int minimo,int maximo,int reintentos);

int utn_searchFreeSpace(char pArray[][20],int limit, int* pIndex);

int utn_searchName(char* pNombre,char pArray[][20],int limit,int* pIndex);

#endif // ARRAYRELOADED_H_INCLUDED
