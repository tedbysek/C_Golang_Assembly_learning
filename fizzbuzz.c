#include "stdio.h"

int main() {
  int a = 0;
  while(a < 100) {
    a = a + 1;
    if(a % 3 == 0 && a % 5 == 0) {
      printf("fizzbuzz \n");
    }
    else if(a % 3 == 0) {
      printf("fizz \n");
    }
    else if(a % 5 == 0) {
      printf("buzz \n");
    }
    else {
      printf("%d \n", a);
    }
  }
}
