#include<stdio.h>
#include<conio.h>

#define TAMANO 4

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
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
    }
}

void imprimir(struct producto vector[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i %s %0.2f\n",vector[f].codigo,vector[f].descripcion,vector[f].precio);
    }
}

void precioMayor(struct producto vector[TAMANO])
{
    int pos=0;
    for(int f=1;f<TAMANO;f++)
    {
        if(vector[f].precio>vector[pos].precio)
        {
            pos=f;
        }
    }
    printf("El producto mas caro es: %s",vector[pos].descripcion);
}

int main()
{
    struct producto vector[TAMANO];
    cargar(vector);
    imprimir(vector);
    precioMayor(vector);
    getch();
    return 0;
}
