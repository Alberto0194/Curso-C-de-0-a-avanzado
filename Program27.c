#include<stdio.h>
#include<conio.h>

int main()
{
    int x; //o tambien aqui al lado en int podemos colocar int x=1;//
    x=1;
    while (x<=100)
    {
        printf("%i ",x); //al lado de %i un espacio, esto sera el espacio para cada valor de la funcion o podemos colocar debajo printf("-") para separarlos//
        x=x+1; //aqui dira que x que es 1 como arriba senala sera sumado +1 hasta cumplir con la funcion de while de x<=100//
    }

    getch();
    return 0;
}
