#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4])
{
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("Ingrese elemento:");
            scanf("%i", &mat[f][c]);
        }
    }
}

void fila1(int mat[3][4])
{
    printf("Primera fila:");
    for(int c=0;c<4;c++)
    {
        printf("%i ",mat[0][c]);
    }
    printf("\n");
}

void fila2(int mat[3][4])
{
    printf("Ultima fila:");
    for(int c=0;c<4;c++)
    {
        printf("%i ",mat[2][c]);
    }
    printf("\n");
}

void columna1(int mat[3][4])
{
    printf("Primera columna");
    for(int f=0;f<3;f++)
    {
        printf("%i ",mat[f][0]);
    }
    printf("\n");
}

void imprimir(int mat[3][4])
{
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}




int main()
{
    int mat[3][4];
    cargar(mat);
    fila1(mat);
    fila2(mat);
    columna1(mat);
    imprimir(mat);
    getch();
    return 0;
}
