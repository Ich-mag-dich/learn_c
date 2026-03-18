#include <inttypes.h>  // int32_t와 같은 고정 너비 정수형을 사용하기 위해 필요한 헤더 파일
#include <stdio.h>

int main(int argc, char const* argv[]) {
  int32_t me32;  // me32는 32비트 부호 있는 정수형 변수다
  me32 = 45933945;
  printf("먼저, int32_t 를 int형이라고 가정한다: ");
  printf("me32 = %d\n",
         me32);  // int32_t는 int형과 동일한 크기를 가지므로 %d로 출력할 수 있다
  printf("이제, 어떠한 가정도 하지 말자.\n");
  printf("그 대신에, inttypes.h에 있는 \"macro\"를 사용한다: ");
  printf("me32 = %" PRId32 "\n",
         me32);  // PRId32는 int32_t를 출력하기 위한 매크로이다
  return 0;
}