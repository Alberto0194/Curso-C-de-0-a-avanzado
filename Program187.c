#include<stdio.h>
#include<conio.h>

#define FILAS 3
#define COLUMNAS 3

void cargar(int mat[FILAS][COLUMNAS])
{
    for(int f=0;f<FILAS;f++)
    {
        for(int c=0;c<COLUMNAS;c++)
        {
            printf("Ingrese elemento [%i,%i]:",f,c);
            scanf("%i",&mat[f][c]);
            if(mat[f][c]==0)
            {
                goto salir;
            }
        }
    }
    return;
    salir:printf("Con 0 se termina la carga de los valores\n");
}

void imprimir(int mat[FILAS][COLUMNAS])
{
     for(int f=0;f<FILAS;f++)
    {
        for(int c=0;c<COLUMNAS;c++)
        {
        printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}


int main()
{
    int mat[FILAS][COLUMNAS]={{0,0,0},
                              {0,0,0},
                              {0,0,0}};
    cargar(mat);
    imprimir(mat);
    getch();
    return 0;
}
