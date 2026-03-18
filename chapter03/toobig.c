#include <stdio.h>

int main(int argc, char const* argv[]) {
  int i = 2147483647;           // Maximum value for a 32-bit signed integer
  unsigned int j = 4294967295;  // Maximum value for a 32-bit unsigned integer
  printf("i %d | %d | %d\n", i, i + 1, i + 2);  // This will cause overflow
  printf("j %u | %u | %u\n", j, j + 1, j + 2);  // This will cause overflow
  return 0;
}