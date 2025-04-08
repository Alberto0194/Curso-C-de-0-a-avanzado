# Curso-C-de-0-a-avanzado

&& = y
|| = O
& = ampersar
#include<stdio.h>
#include<conio.h>
int main()
{}
De esta forma se comienza

recordando que #include<conio.h> es para getch (); que es para que el programa al final cuando se quiera presentar este no se cierre de forma inprevista como pasa si se utiliza getchar(); y al final siempre acompanando a getch(); se coloca debajo return 0; para que el programa se serseore de que todo esta bien .

#include<stdio.h> se utiliza para darle funcionamiento a printf, scanf, fclose, fopen entre otros

printf=para imprimir
scanf("%i", &variable,= para que la entrada de datos tome lugar de la variable
printf("%i", variable, esta sea imprimida)

if ((variable%15))==0 esto es para saber si el valor a recibir es multiplo de 15.
if ((variable%2))==0 para identificar un valor par, esto reconocen par aunque sean negativos

printf("%0.2f,variable) el 0.2 es para indicar la cantidad de decimales que la variable presentara en este caso seran 2

printf("%f\n",variable) para usar salto de espacio colocamos \n delante de la dreccion de la variable

printf("Comentario %i \n",variable) esto ahorrara tiempo e indica que la variable estara en conjunto despues del comentario sera comentario variable

para utilizar otra condicion if es necesario estar dos corchetes }} separados de otro if 

break; funciona para cualquier condicion repetitiva, corta cuando la primera se cumpla y pasa a la siguiente

printf("\n\n") para dar dos saltos

for(letra='a';letra'z';letra++)
al igual que el entero en char es decir en letras se efectua

para declarar una variable tipo letra se utliza char variable[la cantidad de letras que puede ser ingresada] si dice 30 seran 29 leidas lo demas sera leido como un error

para que el char sea ingresado en tipo letras en vez de scanf se utiliza gets(variable tipo char) para que lean la entrada por teclado

funcion #include<string.h> para hacer funcion de las funciones string

strlen para el conteo de letras, para leer la funcion strlen esta hace el papel de while y realiza el terminal de la palabra '\0' y se utliza para el conteo de las letras de una palabra if (strlen(nombre1) > strlen(nombre2))

strcmp se utiliza para comparar palabras ya  sean iguales menores o iguales alfabeticamente, verdaero se reconoce como ==0 mientras mayor a este es falso (strcmp(nombre1,nombre2)==0

strcpy se utiliza para copiar los datos de una variable borrando a los datos de la variable a donde se va a dirigir strcpy(nombrelargo,nombre1); como tambien introducir algun dato como dejarla vacia tambie strcpy(cadnea,"") sin espacio en blanco, el espacio en blanco recordamos que es contado como caracter
o obtamos por char[0]='\0'; para que este vacia

la funcion strcat concatena la primera variable con la segunda ejemplo strcpy (variable3, variable1)esto hara que la primera variable borre la 3 para ocupar su lugar y continuar con la funcion "strcat" strcat (variable3," ")para dejar espacio y strcat (variable3, variable2)esto sera
que la variable3 junte variable1 y variable2 y mas " " hara que la variable1 y variable2 tengan espacio en medio, la variable3 servira para ser en donde las variable 1 y 2 se junten. se tiene que utilizar primero strcpy para luego strcat


para que un if(strcmp(variable)funcione con '' o "", las comillas '' son para identificar cadenas si la variable =='\0' si esta cumple pero para decir que si la variable es igual a una cadea por ejemplo (strcmp(variable,"Hola")==0 se utiliza dobles comillas para las cadenas y decirle al progrma que cuando
introduzcan Hola esta cumplira la siguiente instruccion que deseen. esto hara que strcmp compare si la variable y "Hola" ==0 son iguales si los son seran 0 mayor no

funcion void no devuelve nada, debe de estar dentro de un int main para ejecutarce

siempre dejar el espacio en blanco al declarar una funcion tipo char scanf(" %c",&variable);

para pasarle una variable de main a void debe de ser del mismo tipo ya sea int, float etc

para que int main tome el retunr de otro int para llamar se necesirtara una variable extra ej variable de la int main = sup=la otra int(variable a suplantar valor)
esto hara que el return variable de la otra int se ejecute dentro de sup
o simplemente printf("SUperficie %i",nombre de la int(valor de la int main)); y listo

para convertir una variable int a float u otra funcion solo debo de colocarla en () ej int suma  promedio=(float)suma/3
para que la funcion promedio tipo float se muestre no puedo hacer promedio=1+2+3/3 debo de utilizar utra variable suma=1+2+3; y luego promedio=suma/3 para que el resultado se muestre con decimales printf("promedio %0.2f",promedio);

los void no retornan los int,float,char si

para mas eficiente suma=sumar+variable; podriamos hacerlo asi sumar+=variable;

do while funciona hasta que la condicion sea falsa y saldra =significa 'hasta'

while funciona como repetidor meintras que la condicion se cumpla y esta sea falsa =significa 'mientras'

para verificar si las variables estan orndenadas numericamentes o valores enteros,  int cont=1;
    for (int x=0;x<10;x++)
    {
    {
        if(valor[x]>valor[x+1])
            cont=0;
    }
    }
    if (cont)
    {
        printf("Esta orndenado");
    }
    else
    {
        printf("No esta ordenado");
    }

para letras  if(valor[A]>valor[z]) ya que orden A mayuzcula seria la primera y z minuzcula la ultima
            cont=0;

tambien  int menor=vector[0]; si declaramos otra por ejemplo posicion=0 y dentro del if esta seria posicion=x no dira cual es el menor y donde se ubica
    for (int x=1;x<5;x++)
    {
        if (vector[x]<menor) (>) para saber cual es mayor video 148
        {
            menor=vector[x];
        }
    }
    return menor;

para saber si los ingresados por teclado es menor

Cuando hablamos de matrices bidimensionales, la notación comúnmente utilizada es [filas][columnas].
 Esto significa que el primer número representa el número de filas y el segundo número representa el número de columnas.por ejemplo
int valor[3][5] tres filas verticlas y 5 columnas horizontal 12345
							     12345
							     12345

para los char se coloca %s para un solo caracter si son variable[c1][c2] de dos caracteres dos variables tipos char seria %c

para caracter a la hora de imprimir a traves de un void mediante una main, recordar char variable[f][c] esta vez en tipo letras no es igual a numeros, f seria filas y c columnas perso columnas de cantidad de caracteres de la palabra, dentro de [f][c] seria manzana y ocuparia 6 columnas m a n z a n a
recordando que cuando se vaya a cargar la variable tipo char solo ingresar la fila, gets(variable[f])sin la columna
printf("%s\n",variable tipo char[f])

strcmp es una función estándar de C/C++ que se utiliza para comparar dos cadenas de caracteres. Devuelve un valor entero que indica la relación entre las dos cadenas. El valor de retorno puede ser:

void ordenarpaises(char pais[5][31],int habitantes[5])
{
    char aux[31];				en orden alfabetico
    int cont;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(strcmp(pais[f],pais[f+1])>0)
            {
                strcpy(aux,pais[f]);
                strcpy(pais[f],pais[f+1]);
                strcpy(pais[f+1],aux);
                cont=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=cont;
            }
        }
    }
}

void ordenarhabitantes(char pais[5][31],int habitantes[5])
{
    char aux[31];
    int cont;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(habitantes[f]<habitantes[f+1])
            {
                cont=habitantes[f];
                habitantes[f]=habitantes[f+1];
                habitantes[f+1]=cont;
                strcpy(aux,pais[f]);
                strcpy(pais[f],pais[f+1]);
                strcpy(pais[f+1],aux);
            }
        }
    }
} de mayor a menor

Un número negativo si la primera cadena es "menor" (en orden lexicográfico) que la segunda cadena.
Cero si las dos cadenas son "iguales".
Un número positivo si la primera cadena es "mayor" que la segunda cadena.
 char nombres[10][20]; // Un arreglo de 10 cadenas de hasta 20 caracteres

si utilizamos gets y luego scanf es necesario fflush(stdin) para liberar el gets y se omita el enter por el scanf y solo se imprimira edad al lado de ingresar nombre y no permitira ingresar datos al nombre porque la carga de edad estara delante seria
printf("Ingrese nombre")printf("Ingrese edad")
sin fflush(stdin) seria ingrese nombre:ingrese edad: y solo se podra ingresar edad

struct se utiliza para almacenar datos de hasta diferentes tipos, este funcionara siempre que sean dos o mas archivos a registrar, en el int main() debera de ser struct ejemplo1 y ejemplo2, esta seran dos tablas
y lo que esta debajo seran sus campos. recordando que despues de un scanf o despues de un gets si ambos seran utilizados juntos debe de haber un fflush(stdin)antes de infresar el otro

struct producto{
    int codigo;
    char descripcion[41];
    float precio;
};

ejercicio 132-140 strcut como ingresar datos a otra funcion y formas de ingrsar datos a esta para que lo imprima

ehercicio 141 punteros int *pe; para pasar la informacion de otra variable por ejemplo int x1=10; , pe=&x1; valor de x1 pasa a pe y para pasar de pe a x seria que 
int x1; pe=&x1;, *pe=100, ya x1=100

en punteros *p para cargarlo en gets o scanf se debe de ser ej scanf("%i",&(*p).codigo si se utiliza otro campo en struct o tambien se puede hacer de la 
siguiente manera  scanf("%i",&p->codigo

la funcion fflush(stdin) va debajo del scanf si el gets fue primero luego scanf y luego fflush y si es scanf luego gets y luego fflush

video 158 la funcion malloc, free y la libreria stdlib.h, listas tipo pila

perdida de entendimiento del video del 160 en adelante

Lagunas: estructuras dinamicas, listas genericas, 

177 algoritmo retornado de forma recursiva

para los strcut file nodo
 	 struct file *nuevo
file seria la carpeta y nodo la subcarpeta Y le anadimos mediante* la nueva subcarpeta llamada nuevo

tipos de int,char cantidad de byte video 177 a 179

para que una variable muestre su resultado tipo float siendo esta floar pero calculando con variables tipo int seria variable float=(float)(suma de las integrales);

simplificacion suma=suma+promedio = suma+=promedio, suma-=promedio, suma*=promedio, suma/=promedio, suma%=promedio

operador condicional, en vez de if puedo decir que si may=(v1>v2)?v1:v2;
digo mediante ?si es verdadero y luego : si es falsa la condicion y lo que esta en parentesis es la condicion

switch, utilizar siempre el break; despues de cada desicion y al final un defaut para salir del ciclo

break se utiliza para romper cadenas, para salir de un for y hacer cumplir una condicion, si for sera <10 pero digo que if valor==0 y luego coloco un break no tengo que esperar que hayan 10 valores al momento de ingresar un 0 el for se detendra

continue lo utiliza dentro de una operacion repetitiva por ejemplo for y demas si coloco un if que diga x>5 && x<1 y luego continue si el if se cumple volvera al for de lo contrario si es un numero <5 & >1 como 1,2,3,4,5, despues de continue abra un switch en este ejemplo que tomaras esos valores para sus case en este caso decir en palabra esos numeros 'uno' etc

while(mayor a 0 sera siempre verdadero en este caso un 1)

void cargar(int mat[FILAS][COLUMNAS])
{
    for(int f=0;f<FILAS;f++)
    {
        for(int c=0;c<COLUMNAS;c++)
        {
            printf("Ingrese elemento [%i,%i]:",f,c);
            scanf("%i",&mat[f][c]);
            if(mat[f][c]==0)
            {
                goto salir; //la funcion goto a diferencia de break puede salir incluso de los dos for directamente ira a donde su 
etiqueta en este caso salir que pudiera ser cualquiera, luego que salga de los for colocar un return y debajo la etiqueta salir:y el mandato que deba
 de hacer en este caso un printf con un mensaje de lo que pasaria se se ingresa un 0, recordando que al igual que el break goto saldra luego
 de la funcion if se cumpla y debera de estar dentro del if {} a diferencia del break que simplemente se coloca debajo
				
            }
        }
    }
    return;
    salir:printf("Con 0 se termina la carga de los valores\n");
}

stdlib.h es la libreria para utilizar la funcion random y generar numeros aleatorios por ejemplo
valor[f][c]=rand()%10+1 sera 1 entre 10 es decir del 1 al 10 aleatorios
sus funciones como rand,exit,system 

printf("%3i ",valor[f][c]); el 3 en %i le da 3 espacios a los valoes para su mejor organizacion y mejor visualizacion

 if (numero==valor[f][c])
        {
            goto encontrado;
        }
    }
 }
 printf("El valor ingresado no se encuentra.\n");//si no se cumple el if
 return;//no permitira que tome lo de abajo si el if no se cumple
 encontrado:printf("El numero ha sido encontrado.\n");//si el if se cumple goto viene directamente por su etiqueta y 
ejecta esta linea saltando el printf encima de return
}

funcion exit(); la cual detiene el programa de forma inmedita al este ejecutarce
  if(intentos==3)
            {
                exit(1);//se le introdujo un 1 para decir que cuando el return devuelva 1 
el programa esta mal 0 es el return final del programa que indica que esta bien
            }

while(strcmp(clave,"123abc")!=0);
Si la comparación strcmp(clave, "123abc") no es igual a 0, lo que significa que clave no es igual a "123abc", 
el bucle se repetirá y el bloque de código dentro de do {} se ejecutará nuevamente.
 Esto continuará hasta que clave sea igual a "123abc" y la comparación strcmp(clave, "123abc") sea igual a 0.

funcion system
int main()
{
    int codigo;
    codigo=system("program189.exe");
    printf("El programa finalizo retornando el codigo: %i",codigo);
    getch();
    return 0;
}
se utiliza para llamar o abrir un programa.exe en caso de windows.

para llamar a un archivo desde otra carpeta seria ("c:\\programa\\y archivo"); como 
decimos archivos es porque podemos llamar calc.exe la calculadora de windows

la funcion const se refiere a que el valor asignado no podra ser cambiado de ser asi el programa lanzara un errror al usuario, const int valor1=4  ya no puedo decir que valor1=23, sera solo para lectura

#include <time.h> libreria para usar la funcion rand()
int f;
    srand(time(NULL));//#include viene de la libreria #include <time.h>
    for(f=0;f<CANTIDAD;f++)//en este caso cantidad definido por define vale 10, entonces seran 10 numeros aleatorios mostrados en pantalla.
        vec[f]=rand()%100 + 1;\\rand()dice que sera numeros aleatorios del 1 al 100//<stdlib.h> viene de esta libreria

enum operacion {SUMAR,RESTAR,MULTIPLICAR,DIVIDIR};, la funcion enum mas el nombre de una variable en este caso operacion puede
guardar en {}varias informaciones, recoradon que empeza de 0 en el caso de sumar o si queremos que sea de 1 por ejemplo seria SUMAR=1 y los demas seguirian
sucesivamente

int operar(int v1,int v2,enum operacion op)
{
    switch(op)
    {
        case SUMAR:return v1+v2;
        case RESTAR:return v1-v2;
        case MULTIPLICAR:return v1*v2;
        case DIVIDIR:return v1/v2;
        default:printf("El programa se detuvo por una operacion no valida");
            exit(1);
    }
}

otra funcion seria union es como la strcut pero a diferencia de esta es que los datos se guardan en su mismo espacio y campo si imprimo un int y luego un char
cuando vuelva a impirmir el mismo int debajo del char se colocara el valor del char en este caso 'A' y el int imprimira 65 que es el valor numerico de este

funcion typedef declara una etiqueta a las funciones como por ejemplo typedef int entero
en vez de decir dentro de la main int valor1,valor2 puedo decir entero valor1,valor2 
el nombre int sera reemplazado por entero teniendo la misma funcion los dos tendran valores enteros solo cambiara el nombre de la funcion

typedef struct nombre{
    int codigo;
    char descripcion[41];
    float precio;
} tproducto;//etiqueta o fuera seria 
typedef strcut nombre y etiqueta

void imprimir()
{
    int x=0;// aqui imprimira 3 veces 1 porque imprimir ejecuta una sola vez el contador y el prints 1,1,1,
en cambio static int x=0;// cuando llamamemos 3 veces a imprimir se ejecutaran 3 veces dando como resultado 1,2,3
    x++;//en estatic se ejecutara 3 veces en int una sola vez y se ejecutran los demas imprimir con el primer valor
static guardara espacio para los 3 y los ejecutara uno por uno
    printf("%i ",x);
}


int main()
{
    imprimir();
    imprimir();
    imprimir();
    getch();
    return 0;
}

para crear proyectos video 206

la funcion static tambien funciona para ocular procesos del programa por ejemplo static void mostrarTitulo(char *tit)
{
    printf("%s\n",tit);
}/// no se presentara hasta que este sea llamado por otra ejecucion otra parte del programa 
si el static de un proyecto esta en otro archivo no se podra llamar desde la main, sera fijo en dicho archivo

inline video 209
