#include <stdio.h>
#include <stdlib.h>

struct persona
{
    char nombre[30];
    bool b;
}per[100];

void imprimir_vec(int *p);

int main()
{
    int n, a;
    printf("Digite la cantidad de personas: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Ingrese nombre: \n");
        scanf("%s",per[i].nombre);
        printf("Tiene discapacidad marque 1.SI   o   2.NO: \n");
        scanf("%d",&a);
        if(a==1)
        {
            per[i].b=true;
        }
        else
        {
            per[i].b=false;
        }
    }

    imprimir_vec(&n);
}

void imprimir_vec(int *p)
{
    int vec[*p], vecd[*p], c=0, c2=0;

    printf("\n");

    for(int i=0;i<*p;i++)
    {
        if(per[i].b==true)
        {
            vec[c]=i;
            c++;
        }
        else
        {
            vecd[c2]=i;
            c2++;
        }
    }

    printf("PERSONAS DISCAPACITADAS\n");
    for(int i=0;i<c;i++)
    {
        printf("%s\n",per[vec[i]].nombre);
    }

    printf("PERSONAS SIN DISCAPACIDAD\n");
    for(int i=0;i<c2;i++)
    {
        printf("%s\n",per[vecd[i]].nombre);
    }
}
