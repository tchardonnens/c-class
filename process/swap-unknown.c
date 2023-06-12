#include <stdlib.h>
#include <stdio.h>

void swap(void *a, void *b, size_t size)
{
  char temp;
  char *byteA = (char *)a;
  char *byteB = (char *)b;
  for (size_t i = 0; i < size; i++)
  {
    temp = byteA[i];
    byteA[i] = byteB[i];
    byteB[i] = temp;
  }
}

int main()
{
  int a = 5;
  int b = 10;
  swap(&a, &b, sizeof(a));
  printf("a: %d, b: %d\n", a, b);

  float c = 1.23f;
  float d = 4.56f;
  swap(&c, &d, sizeof(c));
  printf("c: %f, d: %f\n", c, d);

  return 0;
}
