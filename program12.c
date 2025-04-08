#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Ingrese el numero:");
    scanf("%i", &num);

    if (num<=9)
    {
       printf("Este numero solo tiene un digito:");
        printf("%i", num);
    }
       else
       {
           printf("Este numero es de dos digitos:");
           printf("%i", num);
       }
       getch();
       return 0;
}
