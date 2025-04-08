#include<stdio.h>
#include<conio.h>

void cargar (float sueldo[6])
{
    for(int x=0;x<6;x++)
    {
        printf("Ingrese sueldo:");
        scanf("%f", &sueldo[x]);
    }
}
void imprimir(float sueldo[6])
{
    printf("Listado completos de sueldos\n");
    for(int x=0;x<6;x++)
    {
        printf("%0.2f\n",sueldo[x]);
    }
}
void gastos(float sueldo[6])
{
    float total=0;
    for(int x=0;x<6;x++)
    {
        total=total+sueldo[x];
    }
    printf("Gastos totales de los sueldos %0.2f",total);
}
int main()
{
    float sueldos[6];
    cargar(sueldos);
    imprimir(sueldos);
    gastos(sueldos);
    getch();
    return 0;
}
