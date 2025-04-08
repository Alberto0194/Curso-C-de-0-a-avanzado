#include<stdio.h>
#include<conio.h>

void cargar(char palabra[40])
{
    printf("Ingrese una palabra:");
    gets(palabra);
}

int canvocal(char pbra[40])
{
    int cant=0;
    int x=0;
    while (pbra[x]!='\0')
    {
        if (pbra[x]=='a' || pbra[x]=='e' || pbra[x]=='i' || pbra[x]=='o' || pbra[x]=='u' ||
            pbra[x]=='A' || pbra[x]=='E' || pbra[x]=='I' ||pbra[x]=='O' || pbra[x]=='U')
            {
                cant++;
            }
            x++;
    }
    return cant;

}

int main()
{
    char pal[40];
    cargar(pal);
    printf("Cantidad de vocales %i de la palabra %s",canvocal(pal),pal);
    getch();
    return 0;
}
