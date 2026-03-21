/* floats.c  -- 몇 가지 부동소수점형 포맷 지정자의 사용 */
#include <stdio.h>

int main(int argc, char const* argv[]) {
  const double RENT = 3852.99;  // const 키워드로 상수 선언

  printf("*%f*\n", RENT);      // 기본적으로 소수점 이하 6자리까지 출력
  printf("*%e*\n", RENT);      // 지수 표기법으로 출력
  printf("*%4.2f*\n", RENT);   // 최소 4자리, 소수점 이하 2자리로 출력
  printf("*%3.1f*\n", RENT);   // 최소 3자리, 소수점 이하 1자리로 출력
  printf("*%10.3f*\n", RENT);  // 최소 10자리, 소수점 이하 3자리로 출력
  printf("*%10.3E*\n",
         RENT);  // 최소 10자리, 소수점 이하 3자리로 지수 표기법으로 출력
  printf("*%+4.2f*\n",
         RENT);  // 최소 4자리, 소수점 이하 2자리로 출력, 양수는 + 기호 표시
  printf("*%010.2f*\n",
         RENT);  // 최소 10자리, 소수점 이하 2자리로 출력, 빈 자리는 0으로 채움

  return 0;
}