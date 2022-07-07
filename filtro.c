#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  while(n < m) {
    int numero = rand() % m;
    if(numero > n && numero < m)    printf("%d ", numero);
    m--;
  }
  printf("\n");
  return 0;
}
