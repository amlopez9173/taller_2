#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void imprimir();
void suma();


int fi,col;
int **p_matriz;
int **p_matriz2;
int **p_matrizres;

int main()
{

    pedirdatos();
    suma();
    imprimir();


    free(p_matriz);
    free(p_matriz2);


return 0;
}

void pedirdatos()
{
    printf("ingrese numero de filas\n");
    scanf("%d",&fi);

    printf("ingrese numero de filas\n");
    scanf("%d",&col);

    p_matriz=(int**)malloc(fi*sizeof(int*));

	for(int i=0; i<col; i++)
	{
		p_matriz[i]=(int*)malloc(col*sizeof(int));
	}

    if(p_matriz==NULL)
    {
		printf("Error reservando memoria. \n");
		exit (1);
	}
	else
    {
		printf("\n\n");
        for(int f =0; f<fi; f++)
        {
			for(int c=0; c<col; c++)
            {
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
            }
		}
	}

	p_matriz2=(int**)malloc(fi*sizeof(int*));

	for(int i=0; i<col; i++)
	{
		p_matriz2[i]=(int*)malloc(col*sizeof(int));
	}

	if(p_matriz==NULL)
    {
		printf("Error reservando memoria. \n");
		exit (1);
	}
	else
    {
		printf("\n\n");
		for(int f =0; f<fi; f++)
        {
			for(int c=0; c<col; c++)
            {
				printf("ingrese dato posicion (%d, %d): ", f, c);
				scanf("%d", &(*(*(p_matriz2+c)+f)));
            }
		}
	}
}

void suma()
{
    p_matrizres=(int**)malloc(fi*sizeof(int*));

	for(int i=0; i<col; i++)
    {
		p_matrizres[i]=(int*)malloc(col*sizeof(int));
	}
    for(int f =0; f<fi; f++)
        {
			for(int c=0; c<col; c++)
            {
                (*(*(p_matrizres+c)+f))=(*(*(p_matriz+c)+f))+(*(*(p_matriz2+c)+f));
            }
        }
}

void imprimir()
{
    printf("Matriz 1 : \n");
	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz+c)+f));
        }

        printf("\n");
    }

    printf("Matriz 2 : \n");
	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz2+c)+f));
        }

        printf("\n");
    }

     printf("Matriz resultado : \n");

	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matrizres+c)+f));
        }

        printf("\n");
    }
}





