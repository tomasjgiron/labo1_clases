#include <stdio.h>

/**
*\brief Solicita al usuario un n�mero entre cierto rango
*\param Puntero que guarda la direcci�n de memoria de la variable entera
*\param M�ximo
*\param Minimo
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si est� mal
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
*\brief Solicita al usuario un n�mero entero
*\param Puntero que guarda la direcci�n de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si est� mal
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
    } while(ret==1);
    return ret;
}

/**
*\brief Solicita al usuario un n�mero flotante
*\param Puntero que guarda la direcci�n de memoria de la variable entera
*\param Mensaje para ingresar un numero
*\param Mensaje de error si el dato ingresado no corresponde
*\return 0 si es ok, -1 si est� mal
*/

int utn_getFloat(float *pNumber, char* msg, char* msgError)
{
    float number;
    int ret = -1;

    do
    {
        printf("%s",msg);
        if (scanf("%f", &number)==1)
        {
            *pNumber=number;
            ret=0;
        }
        else
        {
            printf("%s",msgError);
        }
        fflush(stdin);
        //ffpurge/stdin);
    } while(ret==1);
    return ret;
}

/**
*\brief Realiza el factorial de cierto n�mero
*\param Entero ingresado
*\return Resultado de la operaci�n
*/

int utn_factorial(int numberA)
{
    int result;

    if(numberA == 1)
    {
        return 1;
    }
    result = numberA * utn_factorial(numberA - 1);
    return result;
}

/**
*\brief Realiza la suma de dos n�meros
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operaci�n
*/

int utn_sum(int numberA, int numberB, char* msg)
{
    int result;
    result = numberA+numberB;
    printf("%s%d\n",msg,result);
    return 0;
}

/**
*\brief Realiza la resta entre dos n�meros
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operaci�n
*/

int utn_substraction(int numberA, int numberB, char* msg)
{
    int result;

    result = numberA-numberB;
    printf("%s%d\n",msg,result);
    return 0;
}

/**
*\brief Realiza la multiplicaci�n entre dos n�meros
*\param Entero ingresado
*\param Segundo entero ingresado
*\return Resultado de la operaci�n
*/

int utn_multiply(int numberA, int numberB, char* msg)
{
    int result;

    result = numberA*numberB;
    printf("%s%d\n",msg,result);
    return 0;
}

/**
*\brief Realiza la divisi�n entre dos n�meros
*\param Entero ingresado
*\param Segundo entero ingresado
*\param Mensaje de error si el divisor llegase a ser 0
*\return Resultado de la operaci�n
*/

float utn_division(int numberA, int numberB, char* msg, char* msgError)
{
    float result;

    if(numberA != 0 && numberB != 0)
    {
        result = numberA/numberB;
        printf("%s%.2f\n",msg, result);
    }
    else if(numberA == 0)
    {
        result = 0;
        printf("%s%.2f\n",msg, result);
    }
    else
    {
        if(numberB == 0)
        {
            printf("%s\n", msgError);
        }
    }
    return 0;
}

float utn_calculateAll(int numberA, int numberB)
{
    utn_sum(numberA,numberB,"La suma es: ");
    utn_substraction(numberA,numberB,"La diferencia es: ");
    utn_division(numberA,numberB,"La divisi�n es: ","No se permite la divisi�n por 0");
    utn_multiply(numberA,numberB,"La multiplicaci�n es: ");
    utn_factorial(numberA);
    return 0;
}

int utn_getArrayInt(int *pNumberArray, int limit, char* msg, char* msgError)
{
    int i;
    int ret;
    int aux;

    for(i=0;i<limit;i++)
    {
        ret = utn_getInt(&aux,"Ingrese un numero: ","Error");

        if(ret)
        {
            break;
        }
        *(pNumberArray+i) = aux;
    }

    return ret;
}

int utn_getArrayNumberRanged(int *pNumberArray,int limit , int max, int min, char* msg, char* msgError, int tries)
{
    int i;
    int ret;
    int aux;

    for(i=0;i<limit;i++)
    {
        ret = utn_getNumberRanged(&aux,100,0,"Ingrese un numero: ","Error",3);

        if(ret)
        {
            break;
        }
        *(pNumberArray+i) = aux;
    }

    return ret;
}

int swap(int *numberA, int *numberB)
{
    int aux;
    if (numberA != NULL && numberB != NULL)
    {
    aux = *numberA;
    *numberA = *numberB;
    *numberB = aux;
    }
    return 0;
}
