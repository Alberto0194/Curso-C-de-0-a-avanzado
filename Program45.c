#include<stdio.h>
#include<conio.h>

int main()

{
    int f;
    printf("Tabla del 5: ");
    printf("\n");
    for(f=5; f<=50; f=f+5)
    {
        printf("-");
        printf("%i",f);
    }
    getch();
    return 0;
}
