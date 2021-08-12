/* Escribir un programa que tome tres argumentos enteros positivos e imprima "falso"
si alguno es igual o mayor a la suma de los otros dos, o "verdadero" en caso contrario. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i = atoi(argv[1]);
    int j = atoi(argv[2]);
    int k = atoi(argv[3]);

    int suma_ij = i + j;

if (suma_ij > k || suma_ij == k)
  printf("falso" );
  else
  printf("verdadero" );

}
