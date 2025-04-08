#include<stdio.h>
#include<conio.h>

int returnmayor (int v1, int v2)
{
    int mayor;
    if (v1>v2)
    {
        mayor=v1;
    }
    else
    {
        mayor=v2;
    }
    return mayor;
}

int main()
{
    int valor1, valor2;
    printf("Ingrese primer valor:");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor:");
    scanf("%i", &valor2);
    printf("El valor mayor es %i",returnmayor(valor1,valor2));
    getch();
    return 0;
}
