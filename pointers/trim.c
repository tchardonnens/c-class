#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *trim(char *str)
{
  // remove trailing spaces and tabs
  int length = strlen(str);
  int i = length - 1;
  while (str[i] == ' ' || str[i] == '\t')
  {
    str[i] = '\0';
    i--;
  }
}

int main(void)
{
  char *res = trim(" \t To to\t \t");
  printf("%s\n", res);
  return 0;
}
