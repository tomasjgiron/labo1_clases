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
void employee_delete();

int employee_setId(Employee* this,char* id);
int employee_getId(Employee* this,char* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,char* horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,char* horasTrabajadas);

int employee_setSueldo(Employee* this,char* sueldo);
int employee_getSueldo(Employee* this,char* sueldo);

int employee_addEmployee(Employee* arrayEmployee[],int lenEmployee,char* msgE,int tries);


int employee_initArray(Employee* arrayEmployee[],int lenEmployee);
int employee_findFree(Employee* arrayEmployee[], int lenEmployee);
int parser(Employee* arrayEmployee[],int lenEmployee,char* nombreArchivo);

#endif // employee_H_INCLUDED
