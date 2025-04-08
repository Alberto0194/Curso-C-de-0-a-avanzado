#include<stdio.h>
#include<conio.h>

int main()
{
    int preguntas;
    float respuestas,promedio;
    printf("Cantidad de preguntas:");
    scanf("%i", &preguntas);
    printf("Preguntas asertadas:");
    scanf("%f", &respuestas);
    promedio = (respuestas * 100)/preguntas;

    if (promedio >=90)
    {
        printf("Nivel maximo");
    }
    else
    {
        if (promedio >=70.50)
        {
            printf("Nivel medio");
        }
        else
        {
            if (promedio >=50)
            {
                printf("Nivel regular");
            }
            else
            {
                printf("Fuera de nivel");
            }
        }
    }
    getch();
    return 0;
}
