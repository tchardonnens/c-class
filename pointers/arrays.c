#include <stdlib.h>
#include <stdio.h>

void print_array(int *a)
{
  int k = 0;
  while (*(a + k) >= 0)
  {
    printf("%d ", *(a + k));
    k++;
  }
  printf("\n");
}

int main()
{
  int a[5] = {1, 2, 3, 4, -1};
  print_array(a);
  return 0;
}