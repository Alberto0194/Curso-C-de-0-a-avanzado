#include<stdio.h>
#include<conio.h>

void entero (int valor1)
{
    int x;
    if (valor1<=0)
    {
        printf("Error");
    }
    else
    {
        if (valor1>0)
        {
            for (int x=1; x<=valor1; x++)
                printf("%i-",x);
        }
    }
}

int main()
{
    int valor;
    printf("Ingrese valor mayor a 0:");
    scanf("%i",&valor);
    entero(valor);
    getch();
    return 0;
}
