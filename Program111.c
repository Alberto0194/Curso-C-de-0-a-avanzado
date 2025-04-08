#include<stdio.h>
#include<conio.h>

void cargar(int sueldos[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Ingreses su sueldo:");
        scanf("%i", &sueldos[x]);
    }
}

void ordenar(int sueldos[5])
{
    for(int k=0;k<4;k++)//se coloca<4 y no <5 ya que a la hora de imprimir el primer numero sera 0 sin ingresarlo y el ultimo no se imprimira, tambien recordando que al final quedarian dos numero y una vez que uno se organice el otro sera automaticamente arreglado porque sera el ultimo y no habra necesidad de un for
    {
        for (int x=0;x<4-k;x++)//el -k para que vaya restando las combinaciones, si ya arreglamos 1 numero de 4 quedarian 3 por arreglar por eso el -k
        {
            if (sueldos[x]>sueldos[x+1])
            {
                int aux=sueldos[x];
                sueldos[x]=sueldos[x+1];
                sueldos[x+1]=aux;
            }
        }
    }
}

void imprimir(int sueldos[5])
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n",sueldos[x]);
    }
}

int main()
{
    int sueldos[5];
    cargar(sueldos);
    ordenar(sueldos);
    imprimir(sueldos);
    getch();
    return 0;
}
