#include <stdio.h>


struct estudiante
{
    char nombre[30];
    int grado,edad;
    float promedio;
}est[3];

int main()
{
    int c=0;

    for(int i=0;i<3;i++)
    {
        printf("ingrese el nombre estudiante %d\n",est[i+1]);
        scanf("%s",est[i].nombre);

        printf("ingrese la edad estudiante\n");
        scanf("%d",&est[i].edad);

        printf("ingrese el grado estudiante\n");
        scanf("%d",&est[i].grado);

        printf("ingrese el promedio del estudiante\n");
        scanf("%f",&est[i].promedio);

    }

    float aux=est[0].promedio;

    for(int i=0;i<3;i++)
    {
        if(aux<=est[i].promedio)
        {
            aux=est[i].promedio;
            c=i;
        }
    }
    printf("\n");
    printf("El estudiante con mejor promedio es: %s\n",est[c].nombre);
    printf("El promdeio: %1.1f\n",est[c].promedio);
    printf("Grado: %d\n",est[c].grado);
    printf("Edad: %d\n",est[c].edad);


return 0;
}
