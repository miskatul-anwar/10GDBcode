#include <stdio.h>

int calculate_sum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Sum: %d\n", calculate_sum(array, size)); // Expected sum is 15
  return 0;
}
