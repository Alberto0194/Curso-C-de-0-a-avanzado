 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int edad1,edad2;
     char sexo1,sexo2;
     printf("Ingrese los datos de la primera persona:\n");
     printf("Edad:");
     scanf("%i",&edad1);
     printf("Ingrese sexo f o m: ");
     scanf(" %c", &sexo1);
     printf("\n\n\n");
     printf("Ingrese los datos de la segunda persona:\n");
     printf("Edad:");
     scanf("%i",&edad2);
     printf("Ingrese sexo f o m: ");
     scanf(" %c", &sexo2);
     if (edad1>edad2)
     {
     printf("Edad: %i\n",edad1);
     printf("Sexo: %c",sexo1);
     }
     else
     {
     printf("Edad: %i\n",edad2);
     printf("Sexo: %c",sexo2);
     }
     getch();
     return 0;


 }
