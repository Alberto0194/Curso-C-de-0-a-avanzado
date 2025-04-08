#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    for(int f=0;f<5;f++)
    {
        printf("Ingrese un valor entre 1 y 5: ");
        scanf("%i", &valor);
        if(valor>5 && valor<1)
           continue;
        switch(valor)
        {
            case 1:printf("Uno");
            break;
            case 2:printf("Dos");
            break;
            case 3:printf("Tres");
            break;
            case 4:printf("Cuatro");
            break;
            case 5:printf("Cinco");
            break;
        }
        printf("\n");
    }
    getch();
    return 0;
}
