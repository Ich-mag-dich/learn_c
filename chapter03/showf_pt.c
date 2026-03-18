#include <stdio.h>

int main(int argc, char const* argv[]) {
  float aboat = 32000.0;
  double abet = 2.14e9;
  long double dip = 5.32e-5;
  printf("%f는 %e로 표현할 수 있다.\n", aboat, aboat);
  printf("그것은 16진수 2의 거듭제곱으로 %a이다.\n", aboat);
  printf("%f는 %e로 표현할 수 있다\n", abet, abet);
  printf("%Lf은 %Le로 표현할 수 있다.\n", dip, dip);

  float toobig = 3.4E38 * 100.0f;  // float의 최대값보다 큰 수
  printf("toobig는 %e로 표현할 수 있다.\n", toobig);
  return 0;
}