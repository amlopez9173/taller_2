#include <stdio.h>
#include <stdlib.h>

void pedirdatos(int *,int *);

void buscar(int *,int *);

int n,*p=&n,b,*pb=&b;
int *pv;


int main()
{
printf("ingrese el tamaño del arreglo\n");
scanf("%d",&n);

pv=(int*)malloc(sizeof(int)*n);


pedirdatos(pv,p);

buscar(pv,p);

return 0;
}

void pedirdatos(int *pv,int *p)
{
    for(int i=0;i<*p;i++)
    {
        printf("Ingrese numero %d: ",i+1);
        scanf("%d",&(*(pv+i)));
    }
}

void buscar(int *pv,int *p)
{
    int c=0,b;

    printf("ingresar el numero que desea buscar\n");
    scanf("%d",&b);

    for(int i=0;i<*p;i++)
    {

        if(b==*(pv+i))
        {
            printf("su numero: %d esta en la posicion: %d y en la posicion de memoria: %d\n",*(pv+i),(i+1),(pv+i));
            c++;
        }
    }
    if(c==0)
    {
        printf("el numero %d no esta registrado",b);
    }
}

