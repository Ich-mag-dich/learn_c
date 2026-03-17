#include <stdio.h>  // 표준 입출력 라이브러리를 포함 (전처리기 지시문)

int main(int argc, char const* argv[]) {  // main 함수: 프로그램의 시작점
  int num;                                // 정수형 변수 num 선언
  num = 1;                                // num에 1을 할당
  printf("안녕하세요. %d\n", num);        // num의 값을 출력
  return 0;                               // 프로그램 종료
}

/**
 * 1. stdio.h는 표준 입출력 라이브러리를 포함하는 헤더파일
 * 2. main 함수는 프로그램의 시작점이며, argc와 argv는 명령행 인자를
 * 받는 매개변수
 * 3. int num;은 정수형 변수 num을 선언하는 코드
 * 4. num = 1;은 num 변수에 1을 할당하는 코드
 * 5. printf("안녕하세요. %d\n", num);은 num의 값을 출력하는 코드
 * 6. return 0;은 프로그램이 정상적으로 종료되었음을 나타내는 코드
 */