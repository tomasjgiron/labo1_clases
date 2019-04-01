#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

long utn_factorial(int numberA);

int utn_sum(int numberA, int numberB);

int utn_substraction(int numberA, int numberB);

int utn_multiply(int numberA, int numberB);

float utn_division(int numberA, int numberB, char* msgError);

int utn_getInt(int *pNum, char* msg, char* msgError);

int utn_getFloat(float *pNum, char* msg, char* msgError);

#endif // FUNCIONES_H_INCLUDED
