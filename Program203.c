#include<stdio.h>
#include<conio.h>

int main()
{
    static int x;
    do{
        printf("%i ",x);

    }while(x<=10);
    getch();
    return 0;
}
