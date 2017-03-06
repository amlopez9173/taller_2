#include <stdio.h>

void primo(int *);
void datos(int *);
int main()
{
    int n;
    int *pn=&n;
    primo(pn);
    datos(pn);

    return 0;
}

void datos(int *pnu)
{
    printf("ingrese numero: \n");
    scanf("%d",&(*pnu));

    printf("su direccion en memoria es %d",pnu);
}



void primo(int *pnu)
{
    int c=0;
    for(int i=0;i<=*pnu;i++)
    {
        if(*pnu%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("el numero %d es primo\n",*pnu);
    }
    else
    {
        printf("el numero %d no es primo\n",*pnu);
    }

}



