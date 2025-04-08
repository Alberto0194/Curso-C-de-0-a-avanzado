#include<stdio.h>
#include<conio.h>

int main()
{
    int x,suma,valor,promedio;
    x=1;
    suma=0;
    while(x<=10)
    {
        printf("Ingrese un valor:");
        scanf("%I", &valor);
        suma=suma+valor;
        x=x+1;
    }
    promedio = suma/10;
    printf("La suma total es:");
    printf("%i",suma);
    printf("\n");
    printf("El promedio es:");
    printf("%i",promedio);
    getch();
    return 0;
}
