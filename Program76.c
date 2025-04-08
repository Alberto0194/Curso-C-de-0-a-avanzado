#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char palabra[31];
    printf("Ingrese una palabra:");
    gets(palabra);
    printf("La palabra %s tiene %i letras",palabra,strlen(palabra));
    getch();
    return 0;
}
