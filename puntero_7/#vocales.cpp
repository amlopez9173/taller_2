#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void datos(char *);
void imdato(int *,char *);




int main()
{
char n[30],*p=n;
int m,*pm=&m;

datos(p);

m=strlen(n);

imdato(pm,p);


return 0;
}

void datos(char *p)
{
    printf("ingrese nombre en minuscula: \n");
    gets(p);
    printf("\n");
}

void imdato(int *pm,char *p)
{
    int c=0;
    for(int i=0;i<=*pm;i++)
    {

        if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u')
        {
            c++;
        }

    }

    printf("el numero de vocales son:%d",c);
}


