#include <stdio.h>

int main(int argc, char **argv)
{
  int a = 0;
  int b = 0;

  printf("Give the first number : \n");
  scanf("%d", &a);
  printf("Give the second number : \n");
  scanf("%d", &b);

  printf("a<<3 = %d\n", a << 3);
  printf("b>>2 = %d\n", b >> 2);

  printf("a & b = %d\n", a & b);
  printf("a | b = %d\n", a | b);

  printf("~a = %d\n", ~a);
  printf("~b = %d\n", ~b);

  printf("a && b = %d\n", a && b);
  printf("a || b = %d\n", a || b);
  printf("!(a && b) = %d\n", !(a && b));

  // Display the third lowest bit of each number
  printf("Third lowest bit of %d: %d\n", a, (a << 3) & 1);
  printf("Third lowest bit of %d: %d\n", b, (b << 3) & 1);

  // Display each byte of each number
  for (int i = 0; i < sizeof(int); i++)
  {
    printf("Byte %d of %d: %d\n", i + 1, a, *((unsigned char *)&a + i));
  }

  for (int i = 0; i < sizeof(int); i++)
  {
    printf("Byte %d of %d: %d\n", i + 1, b, *((unsigned char *)&b + i));
  }
}