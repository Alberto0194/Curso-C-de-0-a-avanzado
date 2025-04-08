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

    if (d<=31 || m<=3 || a==2023)
    {
        printf("Pertenece al primer trimestre");
    }
    getch();
    return 0;
}
