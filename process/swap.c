#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int *a = (int *)malloc(sizeof(int));
  int *b = (int *)malloc(sizeof(int));
  *a = 1;
  *b = 2;
  printf("a = %d, b = %d\n", *a, *b);
  swap(a, b);
  printf("a = %d, b = %d\n", *a, *b);
}