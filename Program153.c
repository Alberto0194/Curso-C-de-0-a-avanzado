#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *pe;
    int tam;
    printf("Cuantos elementos tendra el operador:");
    scanf("%i",&tam);
    pe=malloc(tam*sizeof(int));
    for(int f=0;f<tam;f++)
    {
        printf("Ingrese elemento:");
        scanf("%i", &pe[f]);
    }
    printf("Contenido del vector\n");
    for(int k=0;k<tam;k++)
    {
        printf("%i ",pe[k]);
    }
    free(pe);
    getch();
    return 0;
}
