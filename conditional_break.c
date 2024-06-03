#include <stdio.h>

int find_max(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int array[] = {1, 3, 7, 0, 5, 9, 2};
  int size = sizeof(array) / sizeof(array[0]);
  printf("Max value is %d\n", find_max(array, size));
  return 0;
}
