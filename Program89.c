#include<stdio.h>
#include<conio.h>
void calcularsueldo (float costohora, int cantidadhoras)
{
    float sueldo = costohora*cantidadhoras;
    printf("El sueldo total es de %f\n",sueldo);
}

int main()
{
    float costohora;
    int cantidadhoras;
    char opcion;
    do{
        printf("Cuanto le pago por hora?:");
        scanf("%f", &costohora);
        printf("Cuantas hora trabajo?:");
        scanf("%i", &cantidadhoras);
        calcularsueldo(costohora,cantidadhoras);
        printf("Desea calclar el sueldo de otro empleado (s/n)?:");
        scanf(" %c",&opcion);
    }while (opcion=='s');
    getch();
    return 0;
}
