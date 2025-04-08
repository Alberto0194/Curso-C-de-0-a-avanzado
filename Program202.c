#include<stdio.h>
#include<conio.h>

#define tam 10

int proximoMultiplo2()
{
      static int multiplo;
    return multiplo+=2;
}

int main()
{
    for(int f=0;f<tam;f++)
    printf("Multiplo de 2: %i\n",proximoMultiplo2());
    getch();
    return 0;
}
