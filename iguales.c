#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = atoi(argv[1]);
  int j = atoi(argv[2]);
  int k = atoi(argv[3]);

  if (i == j && j == k)
    printf("iguales");
  else
    printf("no iguales");

  return 0;
}
