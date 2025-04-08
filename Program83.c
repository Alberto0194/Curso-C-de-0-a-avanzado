#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[31];
    char nombre2[31];
    char nombre3[31];
    char almacen[93];
    printf("Ingrese primer nombre:");
    gets(nombre1);
    printf("Ingrese segundo nombre:");
    gets(nombre2);
    printf("Ingrese tercer nombre:");
    gets(nombre3);
    if (strcmp(nombre1,nombre2)>0 && strcmp(nombre2,nombre3)>0 && strcmp(nombre1,nombre3)>0){
            strcpy(almacen,nombre1);
            strcat(almacen,",");
            strcat(almacen,nombre2);
            strcat(almacen,",");
            strcat(almacen,nombre3);
            printf("%s",almacen);
    }else if (strcmp(nombre1,nombre2)>0 && strcmp(nombre2,nombre3)>0 && strcmp(nombre1,nombre3)>0){
            strcpy(almacen,nombre1);
            strcat(almacen,",");
            strcat(almacen,nombre3);
            strcat(almacen,",");
            strcat(almacen,nombre2);
            printf("%s",almacen);
    }else if (strcmp(nombre2,nombre1)>0 && strcmp(nombre1,nombre3)>0 && strcmp(nombre2,nombre3)>0){
            strcpy(almacen,nombre2);
            strcat(almacen,",");
            strcat(almacen,nombre1);
            strcat(almacen,",");
            strcat(almacen,nombre3);
            printf("%s",almacen);
    }else if (strcmp(nombre2,nombre1)>0 && strcmp(nombre3,nombre1)>0 && strcmp(nombre2,nombre3)>0){
            strcpy(almacen,nombre2);
            strcat(almacen,",");
            strcat(almacen,nombre3);
            strcat(almacen,",");
            strcat(almacen,nombre1);
            printf("%s",almacen);
    }else if (strcmp(nombre3,nombre2)>0 && strcmp(nombre1,nombre2)>0 && strcmp(nombre3,nombre1)>0){
            strcpy(almacen,nombre3);
            strcat(almacen,",");
            strcat(almacen,nombre1);
            strcat(almacen,",");
            strcat(almacen,nombre2);
            printf("%s",almacen);
    }else if (strcmp(nombre3,nombre2)>0 && strcmp(nombre2,nombre1)>0 && strcmp(nombre3,nombre1)>0){
            strcpy(almacen,nombre3);
            strcat(almacen,",");
            strcat(almacen,nombre2);
            strcat(almacen,",");
            strcat(almacen,nombre1);
            printf("%s",almacen);
    }
    getch();
    return 0;
}
