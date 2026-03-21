/* stringf.c  -- 문자열 포맷 지정자의 사용 */
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(int argc, char const* argv[]) {
  printf("[%2s]\n",
         BLURB);  // 최소 2자리, 문자열이 2자리보다 길면 전체 문자열 출력
  printf("[%24s]\n",
         BLURB);  // 최소 24자리, 문자열이 24자리보다 길면 전체 문자열 출력
  printf("[%24.5s]\n",
         BLURB);  // 최소 24자리, 문자열이 5자리보다 길면 처음 5자리만 출력
  printf("[%-24.5s]\n",
         BLURB);  // 최소 24자리, 문자열이 5자리보다 길면 처음 5자리만 출력,
                  // 왼쪽 정렬

  return 0;
}