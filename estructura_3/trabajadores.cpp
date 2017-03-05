#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct trabajadores
{
    char nombre[30];
    int salario, ced;
}empleado[100];

void menor_mayor(int *p);

int main()
{
    int n;
    printf("Digite cantidad de trabajadores: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Ingrese nombre trabajador %d: ",i+1);
        scanf("%s",empleado[i].nombre);
        printf("Ingrese cedula: ");
        scanf("%d",&empleado[i].ced);
        printf("Ingrese salario: ");
        scanf("%d",&empleado[i].salario);
    }

    menor_mayor(&n);

}

void menor_mayor(int *p)
{
    int aux1, aux2, c1=0, c2=0;
    aux1=empleado[0].salario;
    aux2=empleado[0].salario;

    for(int i=0;i<*p;i++)
    {
        if(aux1<=empleado[i].salario);
        {
            aux1=empleado[i].salario;
            c1=i;
        }
    }

    for(int i=0;i<*p;i++)
    {
        if(aux2>=empleado[i].salario)
        {
            aux2=empleado[i].salario;
            c2=i;
        }
    }

    printf("Trabajador con mayor salario\n");
    printf("Nombre: %s\n",empleado[c1].nombre);
    printf("Cedula: %d\n",empleado[c1].ced);
    printf("Sueldo: %d\n",aux1);

    printf("Trabajador con menor salario\n");
    printf("Nombre: %s\n",empleado[c2].nombre);
    printf("Cedula: %d\n",empleado[c2].ced);
    printf("Sueldo: %d\n",aux2);

}
