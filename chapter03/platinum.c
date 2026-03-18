#include <stdio.h>

int main(int argc, char const* argv[]) {
  float weight;  // 몸무게
  float value;   // 플래티넘 가치로 계산한 값

  printf("당신의 몸무게를 플래티넘 가치로 계산하면 얼마나 나갈까요?\n");
  printf("어디 한번 계산해 봅시다.\n");
  printf("몸무게를 파운드 단위로 입력하시오: ");

  scanf("%f", &weight);

  // 플래티넘 가격은 온스당 $1700이라고 가정
  // 14.5833 온스가 1 파운드이므로, 플래티넘 가격은 파운드당 $1700 * 14.5833
  value = weight * 1700 * 14.5833;
  printf("당신의 몸무게는 플래티넘으로 $%.2f입니다.\n",
         value);  // 소수점 둘째 자리까지 출력

  return 0;
}
