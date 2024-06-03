#include <stdlib.h>

int main() {
  int *ptr = malloc(10 * sizeof(int));
  // No free() call, leading to memory leak
  return 0;
}
