#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    float man,tar;
    float turnoam[4];
    float turnopm[4];
    printf("Sueldo de la manana.\n");
    for (f=0; f<4; f++)
    {
        printf("Ingrese sueldo:");
        scanf("%f",&turnoam[f]);
    }
     printf("Sueldo de la tarde.\n");
    for (f=0; f<4; f++)
    {
        printf("Ingrese sueldo:");
        scanf("%f",&turnopm[f]);
    }
    tar=0;
    man=0;
    for (f=0; f<4; f++)
    {
        man=man+turnoam[f];
        tar=tar+turnopm[f];
    }
    printf("Turno am:");
    printf("%0.2f\n",man);
    printf("Turno pm:");
    printf("%0.2f\n",tar);
    getch();
    return 0;
}
