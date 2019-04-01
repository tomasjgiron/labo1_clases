#include <stdio.h>

/**
*\brief Solicita al usuario un número entre cierto rango
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Máximo
*\param Minimo
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si está mal
*/

int utn_getNumberRanged(int *pNumber, int max, int min, char* msg, char* msgError, int tries)
{
    int number;
    int ret = -1;

    while(tries>0)
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            if (number>min && number<max)
            {
                *pNumber = number;
                ret = 0;
                break;
                //ok
            }
    }
    printf("%s\n", msgError);
    //mal
    tries--;
}
return ret;
}

/**
*\brief Solicita al usuario un número entero
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si está mal
*/

int utn_getInt(int *pNum, char* msg, char* msgError)
{
    int number;
    int ret = -1;

    do
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            *pNum=number;
            ret=0;
        }
        else
        {
            printf("%s",msgError);
        }
        fflush(stdin);
        //ffpurge/stdin);
    } while(ret==1)
    return ret;
}

/**
*\brief Solicita al usuario un número flotante
*\param Puntero que guarda la dirección de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si está mal
*/

int utn_getFloat(float *pNum, char* msg, char* msgError)
{
    float number;
    int ret = -1;

    do
    {
        printf("%s",msg);
        if (scanf("%d", &number)==1)
        {
            *pNum=number;
            ret=0;
        }
        else
        {
            printf("%s",msgError);
        }
        fflush(stdin);
        //ffpurge/stdin);
    } while(ret==1)
    return ret;
}

/**
*\brief Realiza el factorial de cierto número
*\param Entero ingresado
*\return Resultado de la operación
*/

long utn_factorial(int numberA)
{
    int a;
    long result = 1;

    for(c=1;c<number;c++)
    {
        result*=c;
        return result;
    }
}

/**
*\brief Realiza la suma de dos números
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/

int utn_sum(int numberA, int numberB)
{
    int result;
    result = numberA+numberB;
    return result;
}

/**
*\brief Realiza la resta entre dos números
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/

int utn_substraction(int numberA, int numberB)
{
    int result;
    result = numberA-numberB;
    return result;
}

/**
*\brief Realiza la multiplicación entre dos números
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operación
*/

int utn_multiply(int numberA, int numberB)
{
    int result;
    result = numberA*numberB;
    return result;
}

/**
*\brief Realiza la división entre dos números
*\param Entero ingresado
*\param Segundo entero ingresado
*\param Mensaje de error si el divisor llegase a ser 0
*\return Resultado de la operación
*/

float utn_division(int numberA, int numberB, char* msgError)
{
    float result;
    int return = 1;
    if(numberA != 0 && numberB != 0)
    {
        result = numberA/numberB;
        printf("El resultado de la división es: %.2f", result);
    }
    else if(numberA == 0)
    {
        result = 0;
        printf("El resultado de la división es: %.2f", result);
    }
    else
    {
        if(numberB == 0)
        {
            printf("%s", msgError);
        }
    }
    return result;
}

float utn_calculateAll(int numberA, int numberB)
{
    float result;
    utn_sum();
    utn_substraction();
    utn_multiply();
    utn_division();
    utn_factorial();
}
