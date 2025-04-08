#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    int suma;
    for(int f=0;f<10;f++)
    {
        printf("Ingrese valor,'0 para terminar la suma de los valores':");
        scanf("%i", &valor);
        if(valor==0)
            break;
        suma+=valor;
    }
    printf("La suma de los valores es:%i",suma);
    getch();
    return 0;
}
