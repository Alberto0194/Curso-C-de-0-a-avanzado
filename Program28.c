#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,x=1;
    printf("Ingrese numero:");
    scanf("%i",&num1);
    while (x<=num1)
    {
        printf("%i",x);
        printf("-");
        x=x+1;
    }
    getch();
    return 0;
}
