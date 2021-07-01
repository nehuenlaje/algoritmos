// args.c
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hola, %s\n", argv[3]);
  printf(", %s\n", argv[2]);
  printf("y %s\n", argv[1]);
  return 0;
}
