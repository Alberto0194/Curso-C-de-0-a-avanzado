#include<stdio.h>
#include<conio.h>

struct pais{
    char nombre[41];
    int cantidad_de_habitantes;
};

int main()
{
    struct pais pais1, pais2, pais3;

    printf("Ingrese el nombre del pais:");
    gets(pais1.nombre);
    printf("Ingrese la cantidad de habitantes de dicho pais:");
    scanf("%i", &pais1.cantidad_de_habitantes);
    fflush(stdin);

    printf("Ingrese el nombre del pais:");
    gets(pais2.nombre);
    printf("Ingrese la cantidad de habitantes de dicho pais:");
    scanf("%i", &pais2.cantidad_de_habitantes);
    fflush(stdin);

    printf("Ingrese el nombre del pais:");
    gets(pais3.nombre);
    printf("Ingrese la cantidad de habitantes de dicho pais:");
    scanf("%i", &pais3.cantidad_de_habitantes);
    fflush(stdin);

    if(pais1.cantidad_de_habitantes>pais2.cantidad_de_habitantes && pais1.cantidad_de_habitantes>pais3.cantidad_de_habitantes)
    {
        printf("EL pais de %s tiene mayor habitantes.",pais1.nombre);
    }
    else
    {
        if(pais2.cantidad_de_habitantes>pais3.cantidad_de_habitantes)
        {
             printf("EL pais de %s tiene mayor habitantes.",pais2.nombre);
        }
        else
        {
            if(pais3.cantidad_de_habitantes>pais1.cantidad_de_habitantes && pais3.cantidad_de_habitantes>pais2.cantidad_de_habitantes)
            {
                 printf("EL pais de %s tiene mayor habitantes.",pais3.nombre);
            }
            else
            {
                printf("Todos los paises tienen la misma cantidad de habitantes.");
            }
        }
    }
    getch();
    return 0;
}
