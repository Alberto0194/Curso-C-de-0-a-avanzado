#include<stdio.h>
#include<conio.h>

int main()
{
    /*
    int x,f,promedio1,promedio2,promedio3,suma1,suma2,suma3,calculo1,calculo2,calculo3;
    calculo1=0;
    calculo2=0;
    calculo3=0;
    suma1=0;
    suma2=0;
    suma3=0;
    promedio1=0;
    promedio2=0;
    promedio3=0;
    for (f=1; f<=22; f++)
    {
        printf("Ingrese la edad del estudiante:");
        scanf("%i",&x);
        if (x>=5 && x<=10)
        {
            suma1=suma1+x;
            promedio1++;
            calculo1=suma1/promedio1;
        }
        else
        {
            if (x>=11 && x<=17)
            {
            suma2=suma2+x;
            promedio2++;
            calculo2=suma2/promedio2;
            }
            else
            {
                if (x>18)
                {
                    suma3=suma3+x;
                    promedio3++;
                    calculo3=suma3/promedio3;
                }
            }

    }
    }


    printf("Promedio de la manana:");
    printf("%i",calculo1);
    printf("\n");
    printf("Promedio de la tarde:");
    printf("%i",calculo2);
    printf("\n");
    printf("Promedio de la noche:");
    printf("%i",calculo3);
    printf("\n");
    if (calculo1<calculo2 && calculo1<calculo3)
    {
        printf("Turno de la manana es menor en promedio de edades");
    }
    else
    {
        if (calculo2<calculo3)
        {
            printf("Turno de la tarde es menor en promedio de edades");
        }
        else
        {
            printf("Turno de la noche es menor en promedio de edades");
        }
    }
    getch();
    return 0;
    */
    int suma1,suma2,suma3,pro1,pro2,pro3,edad,f;
    suma1=0;
    printf("Ingrese la edad del turno de la manana.\n");
    for (f=1; f<=5; f++)
    {
        printf("Ingrese edad:" );
        scanf("%i",&edad);
        suma1=suma1+edad;
    }
    pro1=suma1/5;
    printf("Promedio del turno de la manana:");
    printf("%i",pro1);
    printf("\n");

      suma2=0;
    printf("Ingrese la edad del turno de la tarde.\n");
    for (f=1; f<=6; f++)
    {
        printf("Ingrese edad:" );
        scanf("%i",&edad);
        suma2=suma2+edad;
    }
    pro2=suma2/6;
    printf("Promedio del turno de la tarde:");
    printf("%i",pro2);
    printf("\n");

      suma3=0;
    printf("Ingrese la edad del turno de la noche.\n");
    for (f=1; f<=11; f++)
    {
        printf("Ingrese edad:" );
        scanf("%i",&edad);
        suma3=suma3+edad;
    }
    pro3=suma3/11;
    printf("Promedio del turno de la noche:");
    printf("%i",pro3);
    printf("\n");

    if (pro1<pro2 && pro1<pro3)
    {
        printf("Promedio de la manana es menor");
    }
    else
    {
        if (pro2<pro3)
        {
            printf("Promedio de la tarde es menor");
        }
        else
        {
            printf("Promedio de la noche es menor");
        }
    }
    getch();
    return 0;
}
