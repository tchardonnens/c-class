#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *reverseStr(const char *str)
{
  int length = strlen(str);
  char *res = (char *)malloc(length + 1);

  int i = 0;
  for (i = 0; i < length; i++)
  {
    res[i] = str[length - i - 1];
  }
  res[length] = '\0';

  return res;
}

int main(void)
{
  char *reversed = reverseStr("Unix");
  printf("%s\n", reversed);
  free(reversed);
  return 0;
}
