#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char** argv) {
  short index = 0;
  char text[] = "Programmation\nC\n";
  char *ptr =  malloc(sizeof(text));
  while (text[index]) {
    *(ptr + index) = text[index];
    index++;
  }
  *(ptr + index) = 0;
  printf("%s", ptr);
  return 0;
}
