#include <stdio.h>
#define MAXLINE 100

int main(int argc, char *argv[]) {
  FILE *fp;
  char *file_name = argv[1];
  char line[MAXLINE];
  fp = fopen(file_name, "r");
  while (fgets(line, MAXLINE, fp) != NULL) {
    printf("%s", line);
  }
  fclose(fp);
  return 0;
}
