#include<stdio.h>
#include<conio.h>

void caracter(char x)
{
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
        x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("El caracter %c es una vocal.\n",x);
    }
    else
    {
        printf("El caracter %c no es vocal.\n",x);
    }
}

int main()
{
    char c;
    for(c='A';c<='z';c++)
    {
    caracter(c);
    }
    getch();
    return 0;
}
