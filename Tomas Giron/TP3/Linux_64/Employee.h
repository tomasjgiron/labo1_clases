#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr);
int employee_delete(Employee* this);

int employee_setIdStr(Employee* this, char* value);
int employee_setIdInt(Employee* this, int value);

int employee_getId(Employee* this, int* value);

int employee_setNombre(Employee* this,char* nombre);

int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadasStr(Employee* this, char* value);
int employee_setHorasTrabajadasInt(Employee* this, int value);

int employee_getHorasTrabajadas(Employee* this, int* value);

int employee_setSueldoStr(Employee* this, char* value);
int employee_setSueldoInt(Employee* this, int value);

int employee_getSueldo(Employee* this, int* value);


int employee_addEmployee(Employee* arrayEmployee[],int lenEmployee,char* msgE,int tries);
int employee_initArray(Employee* arrayEmployee[],int lenEmployee);
int employee_findFree(Employee* arrayEmployee[], int lenEmployee);
int parser(Employee* arrayEmployee[],int lenEmployee,char* nombreArchivo);

#endif // employee_H_INCLUDED
