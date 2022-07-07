#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for(int i = 0; i < 1000; i++) {
    int r = rand() % 10;
    printf("%d\n", r);
  }
  return 0;
}
