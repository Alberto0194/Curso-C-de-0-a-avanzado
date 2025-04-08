#include<stdio.h>
#include<conio.h>

void cargar (int vec[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Ingrese elementos:");
        scanf("%i",&vec[x]);
    }
}

void imprimir(int vec[5])
{
    printf("Contenido completo del vector.\n");
    for(int x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
}

int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
