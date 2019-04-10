#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int utn_factorial(int numberA);

int utn_sum(int numberA, int numberB, char* msg);

int utn_substraction(int numberA, int numberB, char* msg);

int utn_multiply(int numberA, int numberB, char* msg);

float utn_division(int numberA, int numberB, char* msg, char* msgError);

int utn_getInt(int *pNum, char* msg, char* msgError);

int utn_getFloat(float *pNum, char* msg, char* msgError);

float utn_calculateAll(int numberA, int numberB);

int utn_getArrayInt(int *pNumberArray, int limit, char* msg, char* msgError);

int utn_getArrayNumberRanged(int *pNumberArray,int limit, int max, int min, char* msg, char* msgError, int tries);

int utn_getArrayFloat(float *pNumberArray,float limit, char* msg, char* msgError);

int utn_showArrayInt(int array[],int limit);

int utn_calculateProm(int array[],int limit,float *pProm);

int utn_searchMaxArray(int array[],int limit,int *pMax);

int utn_searchMinArray(int array[],int limit,int *pMin);

int utn_searchNumberArray(int array[],int limit,int *pNum,char *msg, char *msgError);

#endif // FUNCIONES_H_INCLUDED

