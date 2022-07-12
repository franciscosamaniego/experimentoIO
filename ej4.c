#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int numero;
  int sum = 0;
  int c;
  while ((c = getchar()) != EOF) {
    scanf("%d", &numero);
    sum += numero;
  }
  printf("%d\n", sum);
  return 0;
}
