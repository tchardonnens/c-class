#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *myExtractSubstring(char *str, int debut, int fin)
{
  int length = fin - debut;
  char *res = (char *)malloc(length + 1);
  int i = 0;
  if (debut <= 0 && fin > debut && fin <= strlen(str))
  {
    for (i = 0; i < length; i++)
    {
      res[i] = str[debut + i];
    }
  }
  else
  {
    printf("Error");
  }
  res[length] = '\0';
  return res;
}

int main(void)
{
  char *str = "Unix is great";
  char *sub = myExtractSubstring(str, 0, 7);
  printf("%s\n", sub);
  return 0;
}