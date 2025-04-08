#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    printf("Ingrese palabra:");
    gets(palabra);
    for (int f=0; palabra[f]!='\0'; f++)
    {

        if (palabra[f]=='a' || palabra[f]=='e' || palabra[f]=='i' || palabra[f]=='o' || palabra[f]=='u')
        {
          palabra[f]='-';
        }
    }


        printf("%s", palabra);
        getch();
        return 0;
    }

