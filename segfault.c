#include <stdio.h>

int main() {
  int *ptr = NULL;
  *ptr = 10; // This will cause a segmentation fault
  printf("Value: %d\n", *ptr);
  return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
//
// int main() {
//     int *ptr = (int*)malloc(sizeof(int));  // Allocate memory for the pointer
//     if (ptr == NULL) {
//         fprintf(stderr, "Memory allocation failed\n");
//         return 1;
//     }
//     *ptr = 10;  // Now ptr points to valid memory
//     printf("Value: %d\n", *ptr);
//     free(ptr);  // Free the allocated memory
//     return 0;
// }
