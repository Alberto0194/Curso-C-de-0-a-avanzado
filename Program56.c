#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int sueldos[5];
    //Carga del vector
    for (f=0; f<5; f++)
    {
        printf("Ingrese sueldo:");
        scanf("%i",&sueldos[f]);
    }
    printf("Listado de sueldos.\n");
    //Impresion del vector
    for (f=0; f<5; f++)
    {
        printf("%i",sueldos[f]);
        printf("\n");
    }
    getch();
    return 0;
}
