/* praise1.c -- 몇 가지 유형의 문자열들을 사용한다 */
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(int argc, char const* argv[]) {
  char name[40];

  printf("What is your name? ");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);

  return 0;
}