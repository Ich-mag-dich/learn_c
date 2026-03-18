#include <stdio.h>

int main(int argc, char const* argv[]) {
  char str[] = "안녕하세요";
  printf("%s\n", str);                 // 문자열 출력
  scanf("%s", str);                    // 문자열 입력
  printf("입력한 문자열: %s\n", str);  // 입력한 문자열

  return 0;
}
