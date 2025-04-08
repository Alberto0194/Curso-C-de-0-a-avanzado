#include<stdio.h>
#include<conio.h>

int main()
{
    int f,n,suma,negativo,positivo,multiplo;
    negativo=0;
    positivo=0;
    multiplo=0;
    suma=0;
    for (f=1; f<=10; f++)
    {
        printf("Ingrese valor:");
        scanf("%i",&n);
        if (n>0)
        {
            positivo++;
        }
        else
        {
            if (n<0)
            {
                negativo++;
            }
        }
        if ((n%15)==0)
        {
            multiplo++;
        }
        if ((n%2)==0)
        {
            suma=suma+n;
        }
    }


    printf("Numeros positivos: ");
    printf("%i", positivo);
    printf("\n");
    printf("Numeros negativos: ");
    printf("%i", negativo);
    printf("\n");
    printf("Numeros multiplos de 15: ");
    printf("%i", multiplo);
    printf("\n");
    printf("La suma total es: ");
    printf("%i", suma);
    getch();
    return 0;
}
