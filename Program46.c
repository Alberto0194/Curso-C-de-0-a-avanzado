#include<stdio.h>
#include<conio.h>

int main()
{
    /*
    int f,n,potenciador;
    printf("Tablas de multiplicar");
    printf("\n");
    printf("Numero a multiplicar: ");
    scanf("%i",&n);
    for (f=1; f<=13; f++)
        if(n>=1 && n<=10)
    {
        potenciador=f*n;
        printf("-");
        printf("%i",potenciador);
    }
    if(n>10)
    {
        printf("El numero supera lo requerido");
    }

    getch();
    return 0;
    */
    int f,n;
    printf("Tablas de multiplicar");
    printf("\n");
    printf("Numero a multiplicar del 1 al 10: ");
    scanf("%i",&n);
    for (f=n; f<=n*13; f=f+n)
        if(n>=1 && n<=10)
    {
        printf("%i", f);
        printf("-");
    }
    if(n>10)
    {
        printf("El numero supera lo requerido");
    }

    getch();
    return 0;
}
