#include <stdio.h>
#include <stdlib.h>
//wc en la terminal cuenta lineas palabras y bytes
int main(int argc, char *argv[]) {
  while(1) {
    printf("1-Tipos de datos\n");
    printf("2-Loops y Condicionales\n");
    printf("3-Arrays\n");
    printf("4-I/O\n");
    printf("5-Funciones\n");
    printf("6-Salir\n");
    printf("Elegi una opcion: ");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion) {
      case 1:
      printf("Te sacaste 1 (uno) en tipos de datos\n");
      break;
      case 2:
      printf("Te sacaste 2(dos) en loops\n");
      break;
      case 3:
      printf("Te sacaste 10(diez) en arrays\n");
      break;
      case 4:
      printf("Te sacaste 7(siete) en I/O\n");
      break;
      case 5:
      printf("Te sacaste 4(cuatro) en funciones\n");
      break;
      case 6:
      return 0;
      default:
      printf("No conozco ese numero\n");
    }
  }
return 0;
}
