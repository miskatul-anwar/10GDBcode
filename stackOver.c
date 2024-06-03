#include <stdio.h>

void recursive_function() {
  recursive_function(); // This will cause a stack overflow
}

int main() {
  recursive_function();
  return 0;
}
