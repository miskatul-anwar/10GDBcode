#include <stdio.h>

int buggy_function(int a, int b) {
  return a / b; // Division by zero error if b is 0
}

int main() {
  int x = 10;
  int y = 0;
  printf("Result: %d\n", buggy_function(x, y));
  return 0;
}
