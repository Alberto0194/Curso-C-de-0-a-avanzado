#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0;
    int valor;
    char continuar;
    do{
        printf("Ingrese valor:");
        scanf("%i", &valor);
        suma=suma+valor;
        printf("Desea continuar? s/n: ");
        scanf(" %c", &continuar);
    } while (continuar=='s');
    printf("La suma de los valores es: %i",suma);
    getch();
    return 0;
}
