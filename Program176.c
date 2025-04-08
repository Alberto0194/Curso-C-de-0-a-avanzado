#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1,nota2,nota3;
    float promedio;
    printf("Ingrese primer nota:");
    scanf("%i",&nota1);
    printf("Ingrese segunda nota:");
    scanf("%i",&nota2);
    printf("Ingrese tercer nota:");
    scanf("%i",&nota3);
    promedio=(float)(nota1+nota2+nota3)/3;
    printf("%0.2f",promedio);
    getch();
    return 0;
}
