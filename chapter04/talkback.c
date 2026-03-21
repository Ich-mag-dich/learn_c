#include <stdio.h>
#include <string.h>   // strlen() 함수를 사용하기 위해 필요한 헤더 파일
#define DENSITY 62.4  // 사람의 평균 밀도는 62.4파운드/세제곱피트이다

int main(int argc, char const* argv[]) {
  float weight, volume;
  int size, letters;
  char name[40];  // name은 최대 39자까지 입력할 수 있는 문자 배열이다

  printf("안녕하세요. 이름이 뭐예요? \n");
  scanf("%39s", name);  // 최대 39자까지 입력받도록 제한한다
  printf("%s, 당신의 몸무게는 몇 파운드인가요? \n", name);
  scanf("%f", &weight);
  size = sizeof name;         // name 배열의 크기를 size 변수에 저장한다
  letters = strlen(name);     // name 문자열의 길이를 letters 변수에 저장한다
  volume = weight / DENSITY;  // 몸무게를 밀도로 나누어 부피를 계산한다
  printf(
      "%s, 당신의 몸무게는 %.2f 파운드이고, 당신의 부피는 %.2f "
      "세제곱피트입니다.\n",
      name, weight, volume);
  printf(
      "당신의 이름은 %d 바이트의 크기를 가지며, %d 글자로 이루어져 있습니다.\n",
      size, letters);
  return 0;
}