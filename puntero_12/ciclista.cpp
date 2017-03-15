#include <stdio.h>

struct ciclista
{
    int hora,min,seg;

}cicla[3],*pc=cicla;

void pedirdatos();
void suma();
void imprimir();
int s=0,s2=0,m=0,m2=0,h=0,h2=0;



int main()
{
    pedirdatos();
    suma();
    imprimir();

    return 0;
}

void pedirdatos()
{
    for(int i=0;i<3;i++)
    {
        printf("ingrese hora prueba %d \n",i+1);
        scanf("%d",&pc[i].hora);

        printf("ingrese minutos prueba %d \n",i+1);
        scanf("%d",&pc[i].min);

        printf("ingrese segundos prueba %d \n",i+1);
        scanf("%d",&pc[i].seg);
    }
}

void suma()
{
    for(int i=0;i<3;i++)
    {
        s=pc[i].seg;
        s2=s2+s;
        m=pc[i].min;
        m2=m2+m;
        h=pc[i].hora;
        h2=h2+h;
    }
    while(s2>=60)
    {
        s2=s2-60;
        m2++;
    }
    while(m2>=60)
    {
        m2=m2-60;
        h2++;
    }
}

void imprimir()
{
    printf("el tiempo total es: %d horas %d minutos y %d segundos\n",h2,m2,s2);
}
