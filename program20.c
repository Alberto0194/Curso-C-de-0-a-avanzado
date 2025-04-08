#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,a;
    printf("Dia:");
    scanf("%i",&d);
    printf("Mes:");
    scanf("%i",&m);
    printf("Ano:");
    scanf("%i",&a);

    if (d==25 && m==12 && a>=1)
    {
        printf("Es navidad");
    }
    else
    {
        printf("No es navidad");
    }
    getch();
    return 0;

}
