#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int tabla[4][4];
  int numero;
  scanf("%d", numero);
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      tabla[i][j] = numero;
    }
  }
  return 0;
}
