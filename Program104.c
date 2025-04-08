#include<stdio.h>
#include<conio.h>

void cargar(float alturas[5])
{
    for (int x=0;x<5;x++)
    {
    printf("Ingrese la altura:");
    scanf("%f", &alturas[x]);
    }
}

float calcularpromedio(float alturas[5])
{
    float suma=0;
    float promedio;
    for (int x=0;x<5;x++)
    {
        suma=suma+alturas[x];
    }
    promedio=suma/5;
    return promedio;
}

void tamano(float altas[5], float pro)
{
    int contmas=0;
    int contmenos=0;
    for (int x=0;x<5;x++)
    {
    if (altas[x]>pro)
    {
        contmas++;
    }
    else
    {
        if (altas[x]<pro)
        {
        contmenos++;
    }
    }
    }
    printf("Cantidad de personas altas %i\n",contmas);
    printf("Cantidad de personas bajas %i",contmenos);
}

int main()
{
    float al[5];
    float prom;
    cargar(al);
    prom=calcularpromedio(al);
    printf("Promedio %0.2f\n",prom);
    tamano(al,prom);
    getch();
    return 0;
}

