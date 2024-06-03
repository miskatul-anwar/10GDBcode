#include <stdio.h>

void buggy_function() {
  int arr[5];
  for (int i = 0; i <= 5; i++) { // Off-by-one error
    arr[i] = i * 2;
  }
}

int main() {
  buggy_function();
  return 0;
}
