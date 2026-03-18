#include <stdio.h>

int main(int argc, char const* argv[]) {
  printf("int 형의 크기: %zd바이트\n", sizeof(int));
  printf("char 형의 크기: %zd바이트\n", sizeof(char));
  printf("long 형의 크기: %zd바이트\n", sizeof(long));
  printf("long long 형의 크기: %zd바이트\n", sizeof(long long));
  printf("float 형의 크기: %zd바이트\n", sizeof(float));
  printf("double 형의 크기: %zd바이트\n", sizeof(double));
  printf("long double 형의 크기: %zd바이트\n", sizeof(long double));

  /**
   * int 형의 크기: 4바이트
   * char 형의 크기: 1바이트
   * long 형의 크기: 8바이트
   * long long 형의 크기: 8바이트
   * float 형의 크기: 4바이트
   * double 형의 크기: 8바이트
   * long double 형의 크기: 16바이트
   */
  return 0;
}