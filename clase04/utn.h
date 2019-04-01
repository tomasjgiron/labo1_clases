#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getNumberRanged(int* pNumber, int max, int min, char* msg, char* msgError, int tries);

int utn_getInt(int* pNum, char* msg, char* msgError);

int utn_getFloat(float* pNum, char* msg, char* msgError);

long utn_factorial(int numberA);

int utn_sum(int numberA, int numberB);

int utn_substraction(int numberA, int numberB);

int utn_multiply(int numberA, int numberB);

float utn_division(int numberA, int numberB, char* msgError);

#endif // UTN_H_INCLUDED
