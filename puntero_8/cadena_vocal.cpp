#include <stdio.h>
#include <conio.h>
#include <string.h>

void datos();
void vocal();
void imprimir();

char nom[50],*pn=nom;
int m;
int c1=0,c2=0,c3=0,c4=0,c5=0;


int main()
{


    datos();
    vocal();
    imprimir();


return 0;
}
void datos()
{
    printf("ingrese oracion\n");
    gets(pn);
    m=strlen(pn);
}

void vocal()
{
    for(int i=0;i<m;i++)
    {
        switch(pn[i])
        {
            case'a':
            {
                c1++;
                break;
            }
            case'e':
            {
                c2++;
                break;
            }
            case'i':
            {
                c3++;
                break;
            }
            case'o':
            {
                c4++;
                break;
            }
            case'u':
            {
                c5++;
                break;
            }
        }
    }
}

void imprimir()
{
    printf("la oracion: %s\n",pn);

    printf("la oracion tiene: %d a\n",c1);
    printf("la oracion tiene: %d e\n",c2);
    printf("la oracion tiene: %d i\n",c3);
    printf("la oracion tiene: %d o\n",c4);
    printf("la oracion tiene: %d u\n",c5);

}

