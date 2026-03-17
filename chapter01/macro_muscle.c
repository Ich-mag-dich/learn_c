#include <stdio.h>

int main(int argc, char const* argv[]) {
  printf("Input inch:\n");
  int inch;
  scanf("%d", &inch);
  printf("%d inch is %f cm\n", inch, inch * 2.54);
  return 0;
}
