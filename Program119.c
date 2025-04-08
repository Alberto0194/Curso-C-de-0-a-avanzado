#include<stdio.h>
#include<conio.h>

void cargar(char articulos[3][31])
{
    for(int f=0;f<3;f++)
    {
    printf("Ingrese caracteres:");
    gets(articulos[f]);
    }
}

void imprimir(char articulos[3][31])
{
    printf("Listado de articulos\n");
    for(int f=0;f<3;f++)
    {
        printf("%s\n",articulos[f]);
    }
}

int main()
{
    char articulos[3][31];
    cargar(articulos);
    imprimir(articulos);
    getch();
    return 0;
}

