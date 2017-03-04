# include <stdio.h>


struct competidor
{
    char nombre[30],sexo[10],clud[20];
    int edad;
};



 void cat(int x)
 {
    if(x<=15)
    {
        printf("su categoria es infantil\n");
    }
    else
    {
        if(x<=30)
        {
            printf("su categoria es juvenil\n");
        }
        else
        {
            printf("su categoria es mayor\n");
        }
    }
}

int main()
{
    struct competidor c;

    printf("ingrese el nombre\n");
    scanf("%s",c.nombre);

    printf("ingrese la edad\n");
    scanf("%d",&c.edad);

    printf("ingrese el sexo\n");
    scanf("%s",c.sexo);

    printf("ingrese el clud\n");
    scanf("%s",c.clud);

    printf("nombre: %s\n",c.nombre);
    printf("edad: %d\n",c.edad);
    printf("sexo: %s\n",c.sexo);
    printf("clud: %s\n",c.clud);


    cat(c.edad);

    return 0;
}
