#include<stdio.h>
#include<conio.h>

void cargar(int valor[10])
{
    for(int x=0;x<10;x++)
    {
        printf("Ingrese valores:");
        scanf("%i", &valor[x]);
    }
}

void menor_a_mayor(int valor[10])
{
    int cont=1;
    for (int x=0;x<10;x++)
    {
    {
        if(valor[x]>valor[x+1])
            cont=0;
    }
    }
    if (cont)
    {
        printf("Esta orndenado");
    }
    else
    {
        printf("No esta ordenado");
    }
}


int main()
{
    int valor[10];
    cargar(valor);
    menor_a_mayor(valor);
    getch();
    return 0;
}
