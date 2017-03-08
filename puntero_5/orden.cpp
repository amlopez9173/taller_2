#include <stdio.h>
#include <stdlib.h>


void orden(int *,int *);

int n,*p=&n;
int *pv;

int main()
{

printf("ingrese parametro del arreglo\n");
scanf("%d",&n);

pv=(int *)malloc(sizeof(int)*n);

for(int i=0;i<n;i++)
{
    printf(" ingrese el numero %d :",i+1);
    scanf("%d",&(*(pv+i)));
}

orden(pv,p);

return 0;
}


void orden(int *pv,int *p)
{
    int aux1,aux2,c1;

    for(int i=0;i<*p;i++)
    {
        aux1=*(pv+i);
        for(int j=i;j<*p;j++)
        {
            if(aux1>=*(pv+j))
            {
               aux1=*(pv+j);
               c1=j;
            }
        }
        aux2=*(pv+i);
        *(pv+i)=aux1;
        *(pv+c1)=aux2;

    }

    for(int i=0;i<*p;i++)
    {
        printf("%d ",*(pv+i));

    }
}
