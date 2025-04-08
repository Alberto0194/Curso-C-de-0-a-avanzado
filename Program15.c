#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("Ingrese digito:");
    scanf("%i", &numero);

    if (numero>0)
    {
        printf("El numero es positivo");
    }
    else
    {
        if (numero<0)
        {
            printf("El numero es negativo");
        }
        else
        {
            printf("El numero que ingreso es neutro");
        }
    }
    getch();
    return 0;
}
