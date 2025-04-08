#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    for (int x=0;x<5;x++)
    {
        printf("Ingrese valor:");
        scanf("%i", &vector[x]);
    }
}

int imprimir(int vector[5])
{
    int menor=vector[0];
    for (int x=1;x<5;x++)
    {
        if (vector[x]<menor)
        {
            menor=vector[x];
        }
    }
    return menor;
}

void verificar(int vector[5], int menor)
{
    int cant=0;
    for (int x=0;x<5;x++)
    {
        if (vector[x]==menor)
        {
            cant++;
        }
    }
    if (cant==1)
    {
        printf("El menor elemento no se repite");
    }
    else
    {
        printf("Se ha repetido");
    }
}

int main()
{
    int vector[5];
    int menor;
    cargar(vector);
    menor=imprimir(vector);
    printf("El numero menor es: %i\n",menor);
    verificar(vector,menor);
    getch();
    return 0;
}
