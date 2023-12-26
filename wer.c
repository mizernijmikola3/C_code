#include <stdio.h>

int main() {
  int a = rand() % 100;
  int b = rand() % 100;

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  if (a > b) {
    printf("a > b\n");
  } else if (a < b) {
    printf("a < b\n");
  } else {
    printf("a = b\n");
  }

  return 0;
}
