#include<stdio.h>
#include<conio.h>

void cargar(int vec[5])
{
    printf("Cargar de un vector\n");
    for(int x=0;x<5;x++)
    {
        printf("Cargar elementos:");
        scanf("%i", &vec[x]);
    }
}

void generarvector(int vect1[5], int vect2[5], int vecsuma[5])
{
    for(int x=0;x<5;x++)
    {
        vecsuma[x]=vect1[x]+vect2[x];
    }
}

void imprimir(int vec[5])
{
    printf("Impreson del vector\n");
    for(int x=0;x<5;x++)
    {
        printf("%i - ",vec[x]);
    }
    printf("\n");
}

int main()
{
    int vector1[5];
    int vector2[5];
    int vectorsuma[5];
    cargar(vector1);
    cargar(vector2);
    generarvector(vector1,vector2,vectorsuma);
    imprimir(vector1);
    imprimir(vector2);
    imprimir(vectorsuma);
    getch();
    return 0;
}
