#include<stdio.h>
#include<conio.h>

void csuperficie (int lado)
{
    int superficie=lado*lado;
    printf("La superficie del lado %i es %i\n",lado,superficie);
}

void cperimetro (int lado)
{
    int perimetro=lado*4;
    printf("El perimetro del lado %i es %i\n",lado,perimetro);
}

int main()
{
    for (int x=10; x<=20; x++)
    {
        csuperficie(x);
    }
    for (int x=10; x<=20; x++)
    {
        cperimetro(x);
    }
    getch();
    return 0;
}
