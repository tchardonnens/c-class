// Program that asks the user for a list of integers. When
// the user enters the number 0, the program ends after printing out the
// number of integers entered by the user, their average value, the
// smallest integer and the largest one.

#include <stdio.h>
#include <limits.h>

int main(void)
{
  int num, count = 0, sum = 0;
  int min = INT_MIN, max = INT_MAX;

  printf("Enter a list of integers (0 to end):\n");

  while (1)
  {
    printf(">> ");
    scanf("%d", &num);

    if (num == 0)
    {
      break;
    }

    count++;
    sum += num;

    if (num > max)
    {
      max = num;
    }
    if (num < min)
    {
      min = num;
    }
  }

  if (count == 0)
  {
    printf("No integers were entered.\n");
  }
  else
  {
    printf("Number of integers: %d\n", count);
    printf("Average value: %d\n", sum / count);
    printf("Smallest integer: %d\n", min);
    printf("Largest integer: %d\n", max);
  }

  return 0;
}
