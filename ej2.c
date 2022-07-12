#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int numero;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    scanf("%d", &numero);
    sum += numero;
    if(numero == 0)   break;
  }
  printf("%d\n", sum);
  return 0;
}
