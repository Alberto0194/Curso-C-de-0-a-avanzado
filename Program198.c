#include<stdio.h>
#include<conio.h>

#define tam 5

struct persona{
    char nombre[41];
    int edad;
};

typedef struct persona tpersonas[tam];

void cargar(tpersonas personas)
{
    for(int f=0;f<tam;f++)
    {
        printf("Ingrese el nombre:");
        gets(personas[f].nombre);
        printf("Ingrese la edad:");
        scanf("%i",&personas[f].edad);
        fflush(stdin);
    }
}

void imprimir(tpersonas personas)
{
    for(int f=0;f<tam;f++)
    {
        printf("%s %i\n",personas[f].nombre,personas[f].edad);
    }
}

int main()
{
    tpersonas personas;
    cargar(personas);
    imprimir(personas);
    getch();
    return 0;
}
