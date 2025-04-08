#include<stdio.h>
#include<conio.h>

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

int main()
{
    struct producto prod1, prod2;

    printf("Ingrese codigo del producto:");
    scanf("%i", &prod1.codigo);
    fflush(stdin);
    printf("Ingrese descripcion del producto:");
    gets(prod1.descripcion);
    printf("Ingrese el precio del articulo:");
    scanf("%f", &prod1.precio);

    printf("Ingrese codigo del producto:");
    scanf("%i", &prod2.codigo);
    fflush(stdin);
    printf("Ingrese descripcion del producto:");
    gets(prod2.descripcion);
    printf("Ingrese el precio del articulo:");
    scanf("%f", &prod2.precio);

    if(prod1.precio>prod2.precio)
    {
        printf("El producto %s es mayor en precio",prod1.descripcion);
    }
    else
    {
        if(prod2.precio>prod1.precio)
        {
            printf("El producto %s es mayor en precio",prod2.descripcion);
        }
        else
        {
            printf("Ambos articulos contienen mismo precio");
        }
    }
    getch();
    return 0;
}
