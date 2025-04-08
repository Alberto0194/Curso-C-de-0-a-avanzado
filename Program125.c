#include<stdio.h>
#include<conio.h>

void cargar(char alumnos[4][31], int notas[4])
{
    for(int f=0;f<4;f++)
    {
        printf("Ingrese nombre del estudiante:");
        gets(alumnos[f]);
        printf("Ingrese calificacion del estudiante:");
        scanf("%i", &notas[f]);
        fflush(stdin);
    }
}

void imprimir(char alumnos[4][31], int notas[4])
{
    printf("Estado de alumnos.\n")
    for(int f=0;f<4;f++)
    {
        if(notas[f]>=8)
        {
            printf("El estudiante %s con nota de %i\n",alumnos[f],notas[f]);
            printf("Muy Bueno");
        }
        else
        {
            if(notas[f]>=4 && notas[f]<=7)
            {
                printf("El estudiante %s con nota de %i\n",alumnos[f],notas[f]);
                printf("Bueno");
            }
            else
            {
                printf("El estudiante %s con nota de %i\n",alumnos[f],notas[f]);
                printf("Insuficiente");
            }
        }
        printf("\n");
    }
}

void muybueno(int notas[4])
{
  int cant=0;
  for(int f=0;f<4;f++)
  {
      if(notas[f]>=8)
      {
        cant++;
      }
  }
  printf("Cantidad de estudiantes Muy Buenos:%i",cant);
}

int main()
{
char alumnos[4][31];
int notas[4];
cargar(alumnos,notas);
imprimir(alumnos,notas);
muybueno(notas);
getch();
return 0;
}
