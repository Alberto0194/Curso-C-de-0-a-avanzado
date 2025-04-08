#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre[31];
    char apellido[31];
    char nomape[32];
    printf("Ingrese nombre:");
    gets(nombre);
    printf("Ingrese apellido:");
    gets(apellido);
    strcpy(nomape, nombre);
    strcat(nomape," ");
    strcat(nomape, apellido);
    printf("%s", nomape);
    getch();
    return 0;
}
