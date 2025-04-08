#include<stdio.h>
#include<conio.h>
int main()
{
    int lado;
    int superficie;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&lado);
    superficie=lado*lado;
    printf("La superficie del cuadrado es:");
    printf("%i",superficie);
    getchar();
    return 0;

}
