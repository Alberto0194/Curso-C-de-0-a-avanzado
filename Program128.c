#include<stdio.h>
#include<conio.h>

#define TAMANO 5
#define FINPROGRAMA "Gracias por utilizar nuestro programa"

void cargar(int sueldos[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese sueldo de empleados:");
        scanf("%i", &sueldos[f]);
    }
}

void imprimir(int sueldos[TAMANO])
{
    printf("Lista de sueldos.\n");
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i\n", sueldos[f]);
    }
}

int main()
{
    int sueldos[TAMANO];
    cargar(sueldos);
    imprimir(sueldos);
    printf(FINPROGRAMA);
    getch();
    return 0;
}
