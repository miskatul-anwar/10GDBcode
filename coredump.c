#include <stdio.h>

int main() {
  char *str = "Hello, world!";
  str[0] = 'h'; // This will cause a segmentation fault
  printf("%s\n", str);
  return 0;
}

// #include <stdio.h>
//
// int main() {
//     char str[] = "Hello, world!";  // Use a character array instead of a
//     string literal str[0] = 'h';  // Now str points to writable memory
//     printf("%s\n", str);
//     return 0;
// }
