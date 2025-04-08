#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2,operar;
    printf("Ingresar primer valor:");
    scanf("%i",&v1);
    printf("Ingresar segundo valor:");
    scanf("%i",&v2);
    operar=(v1==v2)?v1+v2:v1*v2;
    printf("Resultado:%i",operar);
    getch();
    return 0;
}
