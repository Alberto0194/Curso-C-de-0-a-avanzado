#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

struct producto cargar()
{
    struct producto pro;
    printf("Ingrese el codigo del producto:");
    scanf("%i", &pro.codigo);
    fflush(stdin);
    printf("Ingrese el nombre del producto:");
    gets(pro.descripcion);
    printf("Ingrese el precio del producto:");
    scanf("%f", &pro.precio);
    return pro;
};

void imprimir(struct producto pro)
{
    printf("Datos del producto.\n");
    printf("Codigo: %i\n",pro.codigo);
    printf("Descripcion: %s\n",pro.descripcion);
    printf("Precio: %0.2f\n",pro.precio);
}

int main()
{
    struct producto pro1,pro2;
    pro1=cargar();
    pro2=cargar();
    imprimir(pro1);
    imprimir(pro2);
    getch();
    return 0;
}
