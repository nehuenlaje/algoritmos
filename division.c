#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if((i % j) % 2 == 0)
        printf("Sí.");
      else
        printf("noooooooo");
     }
  }
  printf("\n");
}
