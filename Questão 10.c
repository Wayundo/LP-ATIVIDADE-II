#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");


int operation;
int y;
int x;
int soma = 0;
int subtracion = 0;

printf ("Informe um número: ");
scanf ("%d", &x);
printf ("Informe um número: ");
scanf ("%d", &y);

soma = x + y;
subtracion = x - y;


printf ("\n Informe a operação desejada: ");
printf ("\n 1 - Adição ");
printf ("\n 2 - Subtração ");
scanf ("%d", &operation);


switch (operation)
{
case 1:
   printf("Resultado: %d", soma);
    break;
    case 2:
 printf("Resultado: %d", subtracion);
    break;

default: 
printf("Opção invalida!");
    break;
}



    


    return 0;
}