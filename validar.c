#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numero;
  int num;
  do {
    printf("numero?\n");
    num = scanf("%d", &numero);
  } while(num < 1);
  printf("%d\n", numero);
  return 0;
}
