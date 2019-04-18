#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    char name[50];
    char surname[50];
    int isEmpty;///para decir si está vacío u ocupado
    int idEmployee;///un numero que se incrementa único e irrepetible
}Employee;

int Employee_initializeArray(Employee* pEmployee, int len, int valor);
int Employee_showArray(Employee* pEmployee,int len);
int Employee_create(Employee* pEmployee, int len, int valor, int* pIndex,char* msg, char* msgE);
int Employee_searchFreeSpace(Employee* pEmployee, int len, int valor, int *pValor);
int Employee_delete(Employee* pEmployee, int len, int valor, int* pIndex,char* msg, char* msgE);
int Employee_modify(Employee* pEmployee, int len, int valor, int* pIndex,char* msg, char* msgE);
int Employee_orderName(Employee* pEmployee, int len, int valor, int* pIndex,char* msg, char* msgE);

#endif // EMPLEADO_H_INCLUDED
