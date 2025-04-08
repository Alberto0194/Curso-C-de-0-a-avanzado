#include<stdio.h>
#include<conio.h>
#include<string.h>

#define fila 4
#define columna 3

void cargar(char nombres[fila][30],int sueldos[fila][columna])
{
    for(int f=0;f<fila;f++)
    {
        printf("Ingrese nombre del empleado:");
        gets(nombres[f]);
        for(int c=0;c<columna;c++)
        {
        printf("Ingrese sueldo:");
        scanf("%i", &sueldos[f][c]);
        fflush(stdin);
        }
    }
}

void imprimir(char nombres[fila][30],int sueldos[fila][columna])
{
    int suma[fila]={0};
    printf("Plantilla de nomina.\n");
    for(int c=0;c<fila;c++)
    {
        printf("%s ",nombres[c]);
        for(int f=0;f<columna;f++)
        {
            printf("%i ",sueldos[c][f]);
            suma[c]=suma[c]+sueldos[c][f];
        }
        printf(" = %i ",suma[c]);
        printf("\n");

    }
}

void sueldostotales(char nombres[fila][30],int sueldos[fila][columna])
{
    printf("Total de sueldos trimestral.\n");
    int suma[fila]={0};
    for(int c=0;c<fila;c++)
    {
        for(int f=0;f<columna;f++)
        {
            suma[c]=suma[c]+sueldos[c][f];
        }
        printf("%s sueldo total de 3 meses %i\n",nombres[c],suma[c]);
    }
}

void sueldototal(int sueldos[fila][columna])
{
    printf("Gasto toal de la empresa.\n");
    int sumatotal=0;
    for(int f=0;f<fila;f++)
    {
        for(int c=0;c<columna;c++)
        {
            sumatotal+=sueldos[f][c];
        }
    }

    printf("%i",sumatotal);
}

void mayor(char nombres[fila][30],int sueldos[fila][columna])
{
    printf("Total de sueldos trimestral.\n");
    int suma[fila]={0};
    int empleadomayor=-1;
    int sumamayor=0;
    for(int c=0;c<fila;c++)
    {
        for(int f=0;f<columna;f++)
        {
            suma[c]=suma[c]+sueldos[c][f];
        }
       // printf("%s sueldo total de 3 meses %i\n",nombres[c],suma[c]);
       if(suma[c]>sumamayor)
       {
           sumamayor=suma[c];
           empleadomayor=c;
       }
    }
    if(empleadomayor!=-1)
    {
        printf("El empleado mayor es %s con un total de %i\n",nombres[empleadomayor],sumamayor);
    }
}



int main()
{
    char nombres[fila][30];
    int sueldos[fila][columna];
    int may[fila];
    cargar(nombres,sueldos);
    imprimir(nombres,sueldos);
    sueldostotales(nombres,sueldos);
    sueldototal(sueldos);
    mayor(nombres,sueldos);
    getch();
    return 0;
}
