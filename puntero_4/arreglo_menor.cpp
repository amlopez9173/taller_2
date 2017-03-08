#include <stdio.h>
#include <stdlib.h>

void menor(int *,int *);



int main()
{
    int n, *p=&n;
    printf("ingrese el tamaño del arreglo\n");
    scanf("%d",&n);

    int v[*p],*pv=v;


    for(int i=0;i<*p;i++)
    {
        printf("ingrese %d dato:\n",i+1);
        scanf("%d",&(*(pv+i)));
    }

    menor(pv,p);

return 0;
}

void menor(int *pv,int *p)
    {
        int aux, c;
        aux=*pv;
        for(int i=0;i<*p;i++)
        {
            if(aux >= *(pv+i))
            {
                aux=*(pv+i);
                c=i;
            }
        }

        printf("\nEl elemento menor del vector es %d en la pocicion de memoria %d",*(pv+c),(pv+c));
    }

