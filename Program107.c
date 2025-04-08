#include<stdio.h>
#include<conio.h>

void cargar(float parcial[5])
{
    for(int x=0;x<5;x++)
    {
    printf("Ingrese las notas de los estudiantes:");
    scanf("%f", &parcial[x]);
    }
}

int mostrar(float parcial[5])
{
    float suma=0;
    float promedio;
    for(int x=0;x<5;x++)
    {
        suma=suma+parcial[x];
    }
    promedio=suma/5;
    return promedio;
}

int main()
{
float AulaB[5];
float AulaA[5];
float promedioA;
float promedioB;
printf("Notas del aula A.\n");
cargar(AulaA);
printf("Notas del aula B.\n");
cargar(AulaB);
promedioA=mostrar(AulaA);//no es necesario, solo para que sea mas leible.
printf("Promedio del aula A: %0.2f\n",promedioA);
promedioB=mostrar(AulaB);
printf("Promedio del aula B: %0.2f\n",promedioB);
//if (mostrar(AulaA)>mostrar(AulaB)
if (promedioA==promedioB)
{
    printf("El aula A y aula B obtuvieron el mismo puntaje.");
}
else
{
    if(promedioA>promedioB)
    {
       printf("El aula A obtuvo mayor puntaje.");
    }
    else
    {
        printf("El aula B obtuvo mayor puntaje.");
    }
}

getch();
return 0;
}

