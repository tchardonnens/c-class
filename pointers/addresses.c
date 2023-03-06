#include <stdio.h>
#include <string.h>

int main(void)
{
  char c = 'a';
  int i = 2;
  double d = 23.1;

  char *pc = &c;
  int *pi = &i;
  double *pd = &d;
  // Values of each variable
  printf("the value of c is %c\n", *pc);
  printf("the value of i is %d\n", *pi);
  printf("the value of d is %f\n", *pd);

  // Addresses of each variable
  printf("the address of c is %p\n", pc);
  printf("the address of i is %p\n", pi);
  printf("the address of d is %p\n", pd);

  // Addresses of each pointer
  printf("the address of pc is %p\n", &pc);
  printf("the address of pi is %p\n", &pi);
  printf("the address of pd is %p\n", &pd);
}