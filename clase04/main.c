#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int A;
    int B;
    int result;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                utn_getInt(&A,"Ingrese primer operando: ","Error");
                break;
            case 2:
                utn_getInt(&B,"Ingrese segundo operando: ","Error");
                break;
            case 3:
                result = utn_sum(A,B);
                printf("La suma es: %d",result);
                break;
            case 4:
                result = utn_substraction(A,B);
                printf("La diferencia es: %d",result);
                break;
            case 5:
                result = utn_division(A,B,"Error");
                printf("La división es: %d",result);
                break;
            case 6:
                result = utn_multiply(A,B);
                printf("La multiplicación es: %d",result);
                break;
            case 7:
                result = utn_factorial(A);
                printf("El factorial de %d es: %d",A ,result);
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }


    return 0;
}
}
