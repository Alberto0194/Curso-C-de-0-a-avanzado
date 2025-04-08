#include<stdio.h>
#include<conio.h>

int main()
{
    int x,cantidad,n;
    float largo;
    x=1;
    cantidad=0;
    printf("Cuantas piezas necesitan:");
    scanf("%i",&n);
    while (x<=n)
    {
        printf("Ingrese las medidas de las piezas:");
        scanf("%f", &largo);
        if (largo>=1.20 && largo<=1.30)
        {
            cantidad=cantidad+1;
        }
        x=x+1;
    }
    printf("La cantidad de piezas son:");
    printf("%i", cantidad);
    getch();
    return 0;

}
