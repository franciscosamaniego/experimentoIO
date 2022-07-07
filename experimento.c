#include <stdio.h>
#include <stdlib.h>
//scanf lee entrada estandar
int main(int argc, char *argv[]) {
  int correcta = (rand() % 1000000) + 1;
  int respuesta;

  for(int i = 0; i < 20; i++) {
    printf("Che, adivina entre 1 y un millon\n");
    scanf("%d", &respuesta);
    if(respuesta < correcta) {
      printf("Mas alto\n");
    } else if (respuesta > correcta) {
      printf("Mas abajo\n");
    } else {
      printf("Bien ganaste\n");
    }
  }
  printf("Segui participando\n");
  return 0;
}
