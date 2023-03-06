#include <stdio.h>
#include <string.h>

int main(void)
{
  int i = 3;
  int j = 2;

  int *pi = &i;
  int temp = *pi;
  int *pj = &j;
  // Values of each variable
  printf("the value of i is %d\n", *pi);
  printf("the value of j is %d\n", *pj);

  *pi = *pj;
  *pj = temp;

  printf("the value of i is %d\n", *pi);
  printf("the value of j is %d\n", *pj);

  return 0;
}