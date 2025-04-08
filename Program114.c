#include<stdio.h>
#include<conio.h>

void cargar(int mat[4][4])
{
    for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("Ingrese valor:");
            scanf("%i", &mat[f][c]);
        }
    }
}
void imprimir(int mat[4][4])
{
    for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%i ",mat[f][c]);
        }
        printf("\n");
    }
}

void imprimir_diagonal(int mat[4][4])
{
    printf("Impresion diagonal:");
    /*printf("%i ",mat[0][0]);
    printf("%i ",mat[1][1]);
    printf("%i ",mat[2][2]);
    printf("%i ",mat[3][3]);*/
/* for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            if (f==c) //otra forma de decir que cuando la f y la columna esten en la misma posicion proceder a imprimir f[0]==c[0] hasta que completen sus filas y columnas
            {
                printf("%i ",mat[f][c]);
            }
        }

    }*/
    for (int k=0;k<4;k++)
    {
        printf("%i ",mat[k][k]);//tambien le decimos cual imprimira, en estos ejemplos vimos como imprimir de forma diagonal, k y k son los mismos pero por estar en []son filas y columnas k[0] k[0] se imprimira el primer valor de la primera fila y primera columna
    }
}

void main()
{
    int mat[4][4];
    cargar(mat);
    imprimir(mat);
    imprimir_diagonal(mat);
    getch();
    return 0;
}
