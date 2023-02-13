// Print out all characters between 'a' and 'z', with their respective
// ASCII code in decimal. Same thing for letters from 'A' to 'Z'.

#include <stdio.h>

int main(void)
{
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++)
  {
    printf("letter: %c, ASCII: %d\n", letter, letter);
  }
  for (letter = 'A'; letter <= 'Z'; letter++)
  {
    printf("letter: %c, ASCII: %d\n", letter, letter);
  }

  return 0;
}
