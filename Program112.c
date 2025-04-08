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

void ordenar_de_mayor_a_menor(int sueldos[5])
{
    for(int k=0;k<4;k++)//se coloca<4 y no <5 ya que a la hora de imprimir el primer numero sera 0 sin ingresarlo y el ultimo no se imprimira, tambien recordando que al final quedarian dos numero y una vez que uno se organice el otro sera automaticamente arreglado porque sera el ultimo y no habra necesidad de un for
    {
        for (int x=0;x<4-k;x++)//el -k para que vaya restando las combinaciones, si ya arreglamos 1 numero de 4 quedarian 3 por arreglar por eso el -k
        {
            if (sueldos[x+1]>sueldos[x])
            {
                int aux=sueldos[x+1];
                sueldos[x+1]=sueldos[x];
                sueldos[x]=aux;
            }
        }
    }
}

void ordenar_de_menor_a_mayor(int sueldos[5])
{
    for(int k=0;k<4;k++)//se coloca<4 y no <5 ya que a la hora de imprimir el primer numero sera 0 sin ingresarlo y el ultimo no se imprimira, tambien recordando que al final quedarian dos numero y una vez que uno se organice el otro sera automaticamente arreglado porque sera el ultimo y no habra necesidad de un for
    {
        for (int x=0;x<4-k;x++)//el -k para que vaya restando las combinaciones, si ya arreglamos 1 numero de 4 quedarian 3 por arreglar por eso el -k
        {
            if (sueldos[x]>sueldos[x+1])//tambien para mayor a menor dejamos todo igual y solo cambiamos if (sueldos[x]<sueldos[x+1]) si cambiamos > por < seria todo igual y no cambiamos el aux
            {
                int aux=sueldos[x]; //recordando que sueldo[x]es el mas alto asi lo lee el programa y mientras mas le sumemos por ejemplo [x+1] este ultimo sera mas baso
                sueldos[x]=sueldos[x+1];
                sueldos[x+1]=aux;
            }
        }
    }
}

void imprimir_de_menor_a_mayor(int sueldos[5])  //tambien se puede utilizar dos impirmir para cada uno pero tambien ambos se pueden imprimir solo llamando la variable cuando se necesite
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n",sueldos[x]);//o printf("%i - ",sueldos[x]) para que se impriman uno al lado del otro y - los separe
    }
}

int main()
{
    int sueldos[5];
    cargar(sueldos);
    printf("De menor a mayor\n");
    ordenar_de_menor_a_mayor(sueldos);
    imprimir_de_menor_a_mayor(sueldos);
    printf("De mayor a menor\n");
    ordenar_de_mayor_a_menor(sueldos);
    imprimir_de_menor_a_mayor(sueldos);
    getch();
    return 0;
}

