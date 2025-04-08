#include<stdio.h>
#include<conio.h>

void cargar(char nombres[5][31], float precios[5])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese nombre del producto:");
        gets(nombres[f]);
        printf("Ingrese precio del producto:");
        scanf("%f", &precios[f]);
        fflush(stdin);
    }
}

void ventas(float precios[5])
{
    int cont=0;
    for(int f=1;f<5;f++) //for(int f=0;f<5;f++)
    {
        if(precios[f]>precios[0]) //if (precios[f+1]>precios[f])
        {
            cont++;
        }
    }
    printf("Cantidad de productos con precios mayor al primero: %i",cont);
}

void imprimir(char nombres[5][31], float precios[5])
{
    for(int f=0;f<5;f++)
    {
        printf("Productos:%s,Precios:%0.2f\n",nombres[f],precios[f]);
    }
}

int main()
{
    char nombres[5][31];
    float precios[5];
    cargar(nombres,precios);
    imprimir(nombres,precios);
    ventas(precios);
    getch();
    return 0;
}
