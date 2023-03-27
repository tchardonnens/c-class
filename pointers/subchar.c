#include <stdlib.h>
#include <stdio.h>

int isSubChar(char *str, char *subChar)
{
  int i = 0;
  int j = 0;
  while (*(str + i) != '\0')
  {
    while (*(str + j) != *(subChar + j) && *(str + j) != '\0')
    {
      j++;
    }
    if (*(str + i) == *(subChar + j))
    {
      return 1;
    }
    i++;
  }
  if (*(subChar + j) == '\0')
  {
    return 1;
  }
  return 0;
}

int main(void)
{
  char *str = "Unix is great";
  char *subChar = "zzz";
  int res = isSubChar(str, subChar);
  printf("%d\n", res);
  return 0;
}