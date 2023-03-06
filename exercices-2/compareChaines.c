#include <stdio.h>
#include <string.h>

int CompareChaines(char ch1[], char ch2[])
{
  int i;

  for (i = 0; i < strlen(ch1); i++)
  {
    if (ch1[i] > ch2[i])
    {
      return 1;
    }
    if (ch1[i] < ch2[i])
    {
      return -1;
    }
  }
  return 0;
}

int NbOccurrencesTab(int tab[], int n, int a)
{
  int i;
  int res = 0;
  for (i = 0; i < n; i++)
  {
    if (tab[i] == a)
    {
      res++;
    }
  }
  return res;
}

int ContainsDuplicates(int tab[], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
  }
}

int main(void)
{
  int res = CompareChaines("Test de fou", "Test de foa");
  printf("Result is %d\n", res);
  int nums[] = {0, 2, 2, 2, 4};
  int resOccurences = NbOccurrencesTab(nums, 5, 2);
  printf("Result occurences is %d\n", resOccurences);
}