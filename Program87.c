#include<stdio.h>
#include<conio.h>

void funcion()
{
    int valor1,valor2,valor3;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    printf("Ingrese tercer valor:");
    scanf("%i", &valor3);
 if (valor1<valor2 && valor1<valor3)
    {
        printf("EL numero menor es %i",valor1);
    }
    else
    {
        if (valor2<valor1 && valor2<valor3)
        {
            printf("El numero menor es %i",valor2);
        }
        else
        {
             printf("El numero menor es %i",valor3);
        }
    }
    printf("\n\n");
}

int main()
{
    funcion();
    funcion();
    funcion();
    getch();
    return 0;
}
