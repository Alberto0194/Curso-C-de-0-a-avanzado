#include<stdio.h>
#include<conio.h>

int main()
{
    int suma,cant,valor,promedio;
    suma=0;
    cant=0;
    do{
        printf("Ingrese valor(0 finaliza):");
        scanf("%i", &valor);
        if (valor!=0)
        {
            suma=suma+valor;
            cant++;
        }

    } while (valor!=0);
    if (cant!=0)
    {
        promedio=suma/cant;
        printf("El promedio es:");
        printf("%i", promedio);
    }
    else
    {
        printf("Ingrese valor mayor a 0.");
    }
    getch();
    return 0;
}
