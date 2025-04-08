#include<stdio.h>
#include<conio.h>

int retornarsuperficie(int lado)
{
    int superficie=lado*lado;
    return superficie;
}

int main()
{
    int valor, sup;
    printf("Ingrese valor:");
    scanf("%i", &valor);
    sup=retornarsuperficie(valor);
    printf("La superficie es %i",sup);
    /* o tambien, printf("La superficie es %i",retornarsuperficie(valor));*/
    getch();
    return 0;
}
