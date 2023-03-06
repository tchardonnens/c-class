// a program which asks the user for a number between 0 and
// 1000. The program prints out whether the value is greater or lower
// than the secret number. The user should find the secret number with
// at most 10 trials. If the user wins, the program should print out the
// number of trials.
// In the first version of your program, the secret number may be hardcoded. If you wish to use a random number (between 0 and 999),
// use the following code:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));
  int nb = random() % 1000;
  int guess, trys = 0;
  int found = 0;
  do
  {
    printf("Your guess?\n>> ");
    scanf("%d", &guess);
    trys++;
    if (guess < nb)
    {
      printf("Target is higher!\n");
    }
    if (guess > nb)
    {
      printf("Target is lower!\n");
    }
    if (guess == nb)
    {
      printf("Nice guess!\n");
      break;
    }
  } while ((trys < 10 && found == 0));
}
