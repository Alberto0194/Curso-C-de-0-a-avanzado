#include<stdio.h>
#include<conio.h>

int main()
{
    int suma,f,valor,promedio;
    suma=0;
    for (f=1; f<=10; f++)
    {
        printf("Ingrese el valor:");
        scanf("%i", &valor);
        suma=suma+valor;
        promedio=suma/10;
    }
    printf("El promedio es:");
    printf("%i", promedio);
    printf("\n");
    printf("La suma es:");
    printf("%i", suma);
    getch();
    return 0;
}
