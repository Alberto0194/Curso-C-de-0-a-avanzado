#include<stdio.h>
#include<conio.h>
/*
int main()
{
    int x,n;
    n=11;
    x=1;
    while (x<=25)
    {
       printf("%i",n);
        printf("-");
        n=n+11;
        x=x+1;
    }

        getch();
    return 0;
}
*/
int main()
{
    int x, n;
    x=1;
    while (x<=25)
    {
    n=x*11;
    printf("%i",n);
    printf("-");
    x=x+1;
    }
getch();
return 0;
}

