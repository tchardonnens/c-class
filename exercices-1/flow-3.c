// A program that asks the user for a number of integers to
// enter, then counts the number of positive, negative or null integers
// provided by the user. Do not use an array.

#include <stdio.h>

int main(void)
{
  int count, i, num, negatives, positives, nulls;
  printf("Number of integers to enter?\n>>");
  scanf("%d", &count);

  for (i = 0; i < count; i++)
  {
    printf(">> ");
    scanf("%d", &num);
    if (num == 0)
    {
      nulls += 1;
    }
    else
    {
      num > 0 ? positives += 1 : negatives += 1;
    }
  }
  printf("Number of positive numbers: %d\n", positives);
  printf("Number of negative numbers: %d\n", negatives);
  printf("Number of null numbers: %d\n", nulls);
  return 0;
}
