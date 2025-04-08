#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];;
    printf("Ingrese palabra:");
    gets(palabra);
    {
        if (palabra[0]=='A')
        {
            printf("Palabra comienza con A");
        }
        else
        {
            if (palabra[0]=='a')
            {
                printf("Palabra comienza con a");
            }
            else
            {
                printf("Tu palabra no comienza con A o a");
            }
        }
    }
    getch();
    return 0;
}
