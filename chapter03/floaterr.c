#include <stdio.h>

int main(int argc, char const* argv[]) {
  float a, b;
  b = 2.0e20 + 1.0;
  printf("%f\n", b);
  a = b - 2.0e20;
  printf("%f \n", a);

  /**
   * a의 출력은 4008175468544.000000.
   */
  return 0;
}
