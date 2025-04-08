#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    printf("Ingrese una palabra:");
    gets(palabra);
    int x=0;
    int cant=0;
    while (palabra[x]!='\0')
    {
        if (palabra[x]!=0)
        {
            cant++;
        }
        x++;
    }
    printf("La cantidad de letras de la palabra %s es: %i ",palabra,cant);
    getch();
    return 0;
}
