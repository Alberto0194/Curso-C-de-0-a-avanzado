#include<stdio.h>
#include<conio.h>

void genero(char tipo)
{
    if (tipo=='h')
    {
        printf("Hombre\n");
    }
    if (tipo=='m')
    {
        printf("Mujer\n");
    }
}

int main()
{
    char tipo='h';
    genero('m');
    genero(tipo);
    getch();
    return 0;
}
