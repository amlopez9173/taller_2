#include <stdio.h>
#include <stdlib.h>

void pedirdatos();
void imprimir();
void trans();

int fi,col;
int **p_matriz;


int main()
{
    pedirdatos();
    imprimir();
    trans();
    free(p_matriz);

return 0;
}

void pedirdatos()
{
    printf("ingrese numero de filas:\n");
    scanf("%d",&fi);

    printf("ingrese numero de filas:\n");
    scanf("%d",&col);

    p_matriz=(int**)malloc(fi*sizeof(int*));
	for(int i=0; i<col; i++){
		p_matriz[i]=(int*)malloc(col*sizeof(int));
	}
	if(p_matriz==NULL){
		printf("Error reservando memoria. \n");
		exit (1);
	}else{
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
}
void imprimir()
{
    printf("Matriz : \n");
	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz+c)+f));
        }

        printf("\n");
    }
}

void trans()
{
    printf("matriz transpuesta: \n");

	for(int f =0; f<fi; f++)
    {
		for(int c=0; c<col; c++)
		{
			printf(" %d ",*(*(p_matriz+f)+c));
        }
            printf("\n");
    }
}
