#include <stdio.h>

struct alumno
{
    char nombre[30];
    int edad;
    float promedio;
}estudiante[3],*pest=estudiante;


void pedirdatos();
void mprom();

int main()
{
    pedirdatos();
    mprom();


    return 0;
}

void pedirdatos()
{
    for(int i=0;i<3;i++)
    {
        printf("Ingrese el nombre %d:\n",i+1);
        scanf("%s",(*(pest+i)).nombre);

        printf("Ingrese la edad : \n");
        scanf("%d",&(*(pest+i)).edad);

        printf("Ingrese el promedio : \n");
        scanf("%f",&(*(pest+i)).promedio);
    }
}

void mprom()
{
    int c1,i=0;
    float aux1;
    aux1=(*(pest+i)).promedio;

    for(int i=0;i<3;i++)
    {
        if(aux1<=(*(pest+i)).promedio)
        {
            aux1=(*(pest+i)).promedio;
            c1=i;
        }
    }
    printf("el mayor promedio pertenece a:\n");
    printf("el Nombre es : %s\n",(*(pest+c1)).nombre);
    printf("la Edad es : %d\n",(*(pest+c1)).edad);
    printf("el Promedio es : %f\n",(*(pest+c1)).promedio);
}


