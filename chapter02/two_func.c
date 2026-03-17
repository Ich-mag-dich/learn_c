#include <stdio.h>

void butler(void);  // butler 함수의 원형 선언 (프로토타입)

int main(int argc, char const* argv[]) {
  printf("butler 함수 밖에 있느냐?\n");
  butler();
  printf("그래. 차 한 잔 내오고, DVD도 가져오너라.\n");
  return 0;
}

void butler(void) {
  printf("부르셨습니까? 주인님!\n");
}  // butler 함수 정의: "부르셨습니까? 주인님!"을 출력하는 함수