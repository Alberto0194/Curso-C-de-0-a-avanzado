#include<stdio.h>
#include<conio.h>

void cargar(int vector[8])
{
    for(int x=0;x<8;x++)
    {
        printf("Ingrese valor:");
        scanf("%i", &vector[x]);
    }
}

int sumar(int vector[8])
{
    int sumatotal=0;
    for(int x=0;x<8;x++)
    {
        sumatotal=sumatotal+vector[x];
    }
    return sumatotal;
}

int sumar36(int vector[8])
{
    int sumarmayor36=0;
    for(int x=0; x<8;x++)
    {
        if (vector[x]>36)
        {
            sumarmayor36+=vector[x];
        }
    }
    return sumarmayor36;
}

int sumar50 (int vector[8])
{
    int sumarmayor50=0;
    for(int x=0; x<8;x++)
    {

        if (vector[x]>50)
        {
            sumarmayor50++;
        }
    }
    return sumarmayor50;
}

int main()
{
    int vector[8];
    cargar(vector);
    printf("Valor de todos los datos: %i\n",sumar(vector));
    printf("Valores mayores a 36: %i\n",sumar36(vector));
    printf("Valores mayores a 50: %i\n",sumar50(vector));
    getch();
    return 0;
}
