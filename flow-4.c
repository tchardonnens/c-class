// a program that reads an integer from the user and prints out
// each digit of the number on its own line. Here is an output example
// for number 2867:
// 7
// 6
// 8
// 2

#include <stdio.h>

int main(void)
{
  int num, digit, trunc;
  printf("Enter a number:\n>> ");
  scanf("%d", &num);
  trunc = num;
  while (trunc > 0)
  {
    digit = trunc % 10;
    trunc = trunc / 10;
    printf("digit: %d\n", digit);
  }
}