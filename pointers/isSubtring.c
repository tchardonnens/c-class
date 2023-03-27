#include <stdio.h>

int isSubstring(char *str, char *subStr)
{
  if (!str || !subStr)
  {
    return 0;
  }

  if (*subStr == '\0')
  {
    return 1;
  }

  for (int i = 0; str[i] != '\0'; i++)
  {
    int j;
    for (j = 0; subStr[j] != '\0'; j++)
    {
      if (str[i + j] == '\0' || str[i + j] != subStr[j])
      {
        break;
      }
    }

    if (subStr[j] == '\0')
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  char *str = "This is a sample string";
  char *subStr = "sample";

  if (isSubstring(str, subStr))
  {
    printf("The substring '%s' is present in the string '%s'.\n", subStr, str);
  }
  else
  {
    printf("The substring '%s' is not present in the string '%s'.\n", subStr, str);
  }

  return 0;
}
