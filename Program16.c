#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("Ingrese valor:");
    scanf("%i",&numero);

if (numero<=9)
{
     printf("Numero de 1 digito");
}
else
{
    if (numero<=99)
    {
        printf("El numero es de 2 digitos");
    }
    else
    {
        if (numero<=999)
        {
            printf("El numero es de 3 digitos");
        }
        else
        {
            printf("El numero supera los 3 digitos");
        }
    }
}


    getch();
    return 0;
}
