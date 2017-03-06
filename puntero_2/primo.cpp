#include <stdio.h>
#include <stdlib.h>


void primo(int *);

int main()
{
    int n, *pn=&n;

    printf("Ingrese numero:\n ");
    scanf("%d",&(*pn));

    printf("La direccion de memoria es %d\n",pn);

    primo(pn);

    return 0;
}

void primo(int *pn)
{
    int c=0;
    for(int i=1;i<=*pn;i++)
    {
        if(*pn%i==0)
        {
            c=c+1;
        }
    }

    if(c==2)
    {
        printf("El numero %d si es primo",*pn);
    }
    else
    {
        printf("El numero %d no es primo",*pn);
    }
}
