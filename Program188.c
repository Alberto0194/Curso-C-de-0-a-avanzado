#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define FILAS 5
#define COLUMNAS 10

void cargar(int valor[FILAS][COLUMNAS])
{
for(int f=0;f<FILAS;f++)
 {
    for(int c=0;c<COLUMNAS;c++)
    {
        valor[f][c]=rand()%10+1;
    }

 }
}

void imprimir(int valor[FILAS][COLUMNAS])
{
    for(int f=0;f<FILAS;f++)
 {
    for(int c=0;c<COLUMNAS;c++)
    {
        printf("%3i ",valor[f][c]);
    }
        printf("\n");
 }
}

void buscar(int valor[FILAS][COLUMNAS])
{
    int numero;
    printf("Ingrese el valor a buscar:");
    scanf("%i",&numero);
    for(int f=0;f<FILAS;f++)
 {
    for(int c=0;c<COLUMNAS;c++)
    {
        if (numero==valor[f][c])
        {
            goto encontrado;
        }
    }
 }
 printf("El valor ingresado no se encuentra.\n");
 return;
 encontrado:printf("El numero ha sido encontrado.\n");
}

int main()
{
    int valor[FILAS][COLUMNAS];
    cargar(valor);
    buscar(valor);
    imprimir(valor);
    getch();
    return 0;
}
