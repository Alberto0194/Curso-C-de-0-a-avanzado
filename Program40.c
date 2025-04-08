#include<stdio.h>
#include<conio.h>

int main()
{
    int f, aprobado, reprobado, nota;
    aprobado=0;
    reprobado=0;
    for (f=1; f<=10; f++)
    {
        printf("Ingrese las notas:");
        scanf("%i", &nota);
        if(nota>=7)
        {
            aprobado++;
        }
        else
        {
            reprobado++;
        }
    }
    printf("Aprobados:");
    printf("%i", aprobado);
    printf("\n");
    printf("Reprobados:");
    printf("%i", reprobado);

    getch();
    return 0;
}
