#include<stdio.h>
#include<conio.h>

void cargar(char nombres[5][41], int edades[5])
{
    for(int f=0;f<5;f++)
    {
        printf("Ingrese su nombre:");
        gets(nombres[f]);
        printf("Ingrese su edad:");
        scanf("%i", &edades[f]);
        fflush(stdin);
    }
}

void mayor(char nombres[5][41], int edades[5])
{
    printf("Mayores de edad('18+')\n");
    for(int f=0;f<5;f++)
    {
        if(edades[f]>=18)
        {
            printf("%s\n",nombres[f]);
        }
    }
}

int main()
{
    char nombres[5][41];
    int edades[5];
    cargar(nombres,edades);
    mayor(nombres,edades);
    getch();
    return 0;
}
