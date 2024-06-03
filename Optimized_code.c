#include <stdio.h>

int main() {
  int a = 5;
  int b = 0;
  for (int i = 0; i < 100; i++) {
    b += a * i;
  }
  printf("Result: %d\n", b);
  return 0;
}
