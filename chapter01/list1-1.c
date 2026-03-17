#include <stdio.h>

int main(int argc, char* argv[]) {
  int dogs;
  printf("고양이를 몇 마리 키우십니까?\n");
  scanf("%d", &dogs);
  printf("%d마리를 키우시는군요!\n", dogs);

  getchar();
  getchar();
  return 0;
}
