#include <stdio.h>

void printBits(int num)
{
  int bit;
  for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
  {
    bit = (num >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
}

int main()
{
  int num = 23; // example number
  printBits(num);
  return 0;
}
