#include <stdio.h>
#include <stdlib.h>


void npar(int *);

int main()
{
    int v[10], a;
    int *pv=v;

    for(int i=0;i<10;i++)
    {
        printf("Ingrese numero %d:\n ",i+1);
        scanf("%d",&(*(pv+i)));
    }
    npar(pv);

    return 0;
}

void npar(int *par)
{
    printf("\n");
    for(int i=0;i<10;i++)
    {
        if(*(par+i)%2==0)
        {
            printf("El numero %d es par en la pocicion de memoria %p\n",*(par+i),par+i);
        }
    }
}
