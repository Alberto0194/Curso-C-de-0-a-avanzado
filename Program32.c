#include<stdio.h>
#include<conio.h>

int main()
{
    int x,cantidad;
    float suma,altura,promedio;
    x=1;
    suma=0;
    printf("Ingrese cuantas personas que se mediran:");
    scanf("%i",&cantidad);
    while (x<=cantidad)
    {
        printf("Ingrese su altura:");
        scanf("%f",&altura);
        {
            suma=suma+altura;
            {
                promedio=suma/cantidad;
                {
                    x=x+1;
                }
            }
        }
    }

    printf("Promedio de alturas:");
    printf("%f",promedio);
    getch();
    return 0;
}
