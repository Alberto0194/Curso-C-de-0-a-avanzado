#include<stdio.h>
#include<conio.h>

void imprimir()
{
     static int x;
    x++;
    printf("%i ",x);
}


int main()
{
    imprimir();
    imprimir();
    imprimir();
    getch();
    return 0;
}
