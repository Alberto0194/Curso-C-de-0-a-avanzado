#include<conio.h>
#include<stdio.h>

int main()
{
    int v1,v2;
    printf("Ingrese primer valor:");
    scanf("%i",&v1);
    printf("Ingrese segundo valor:");
    scanf("%i",&v2);
int may=v1>v2?v1:v2;
    printf("Valor mayor es:%i\n",may);
    getch();
    return 0;
}
