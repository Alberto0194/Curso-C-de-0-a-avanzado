#include<stdio.h>
#include<conio.h>

void sueldos(float sueldos[4])
{
    for(int x=0;x<4;x++)
    {
        printf("Ingrese su sueldo:");
        scanf("%f", &sueldos[x]);
    }
}

float gastosTurno(float sueldos[4])
{
    float suma=0;
    for(int x=0;x<4;x++)
    {
    suma=suma+sueldos[x];
    }
    return suma;
}




int main()
{
    float sueldoMa[4];
    float sueldoTar[4];
    printf("Sueldos del turno AM.\n");
    sueldos(sueldoMa);
    printf("Sueldos del turno PM.\n");
    sueldos(sueldoTar);
    gastosTurno(sueldoMa);
    printf("Gastos del turno AM: %0.2f\n",gastosTurno(sueldoMa));
    gastosTurno(sueldoTar);
    printf("Gastos del turno PM: %0.2f\n",gastosTurno(sueldoTar));


    getch();
    return 0;
}
