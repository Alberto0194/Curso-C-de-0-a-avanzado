#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int palabra;
    char *vector;
    printf("Cuantas letras tendra la palabra.\n");
    scanf("%i", &palabra);
    fflush(stdin);
    vector=malloc((palabra+1)*sizeof(char));
    printf("Ingrese palabra:");
    gets(vector);
    printf("La palabra es: %s",vector);
    free(vector);
    getch();
    return 0;
}
