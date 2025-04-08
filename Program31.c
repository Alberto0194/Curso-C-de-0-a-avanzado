#include<stdio.h>
#include<conio.h>

int main()
{
    int x,aprobado,reprobado,n;
    x=1;
    aprobado=0;
    reprobado=0;
//o simplemente eliminamos la variable notas y decimos que imprima un mensaje y otro printf que mencione una variable, esto hara que se trabaje con el valor que se le asigne a la variable//
    while (x<=10)
    {
    printf("Ingresar nota:");
    scanf("%i",&n);
    if (n>=7)
    {
        aprobado=aprobado+1;

    }
    else
    {
        if (n<7)
        {
            reprobado = reprobado+1;
        }
    }
    x=x+1;
    }
    printf("\n");
    {
        printf("Notas aprobadas:");
        printf("%i", aprobado);
        printf("\n");
        printf("Notas reprobadas:");
        printf("%i", reprobado);
    }
    getch();
    return 0;
}
