#include<stdio.h>
#include<conio.h>

#define TAMANO 3

struct fecha{
    int dd;
    int mm;
    int aa;
};

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
};

void cargar(struct producto vector[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("Ingrese el codigo del producto:");
        scanf("%i", &vector[f].codigo);
        fflush(stdin);
        printf("Ingrese la descripcion:");
        gets(vector[f].descripcion);
        printf("Ingrese el precio:");
        scanf("%f", &vector[f].precio);
        printf("Fecha de vencimiento.\n");
        printf("Dia:");
        scanf("%i", &vector[f].fechavencimiento.dd);
        printf("Mes:");
        scanf("%i", &vector[f].fechavencimiento.mm);
        printf("Anio:");
        scanf("%i", &vector[f].fechavencimiento.aa);
    }
    printf("\n");
}

void imprimir(struct producto vector[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i %s %0.2f  %i/%i/%i\n",vector[f].codigo,vector[f].descripcion,vector[f].precio,
        vector[f].fechavencimiento.dd,vector[f].fechavencimiento.mm,vector[f].fechavencimiento.aa);
    }
}

int main()
{
    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
