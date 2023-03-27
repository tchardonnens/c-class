#include <stdlib.h>
#include <stdio.h>

char *repeatString(char *str, int count){
  char *res = "";
  for(int i=0; i<count; i++){
    *res += *str;
  }
  return *res;
}

int main(void){
  char *repeated = *repeatString("Unix", 3);
  printf("%c", *repeated);
  return 0;
}
