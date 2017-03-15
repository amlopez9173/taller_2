#include <stdio.h>


struct promedio
{
    float nota1,nota2,nota3;
};

struct alumno
{
    char nombre[30],sexo[10];
    int edad;
    promedio prom;
}

void prom(float a,float b,float c)
    {
        float p;
        p=(a+b+c)/3;
        printf("el promedio es %1.1f",p);
    }

int main()
{
    alumno est;
    printf("Ingrese nombre: \n");
    scanf("%s",est.nombre);

    printf("Ingrese edad: \n");
    scanf("%d",&est.edad);

    printf("Ingrese sexo: \n");
    scanf("%s",est.sexo);

    printf("Ingrese nota 1: \n");
    scanf("%f",&est.prom.nota1);

    printf("Ingrese nota 2: \n");
    scanf("%f",&est.prom.nota2);

    printf("Ingrese nota 3: \n");
    scanf("%f",&est.prom.nota3);



    printf("\n");
    printf("Nombre: %s\n",est.nombre);
    printf("Edad: %d\n",est.edad);
    printf("sexo: %s\n",est.sexo);

    prom(est.prom.nota1,est.prom.nota2,est.prom.nota3);

return 0;
}
