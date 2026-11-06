#include <stdio.h>

int main(void) {
  int a = 5;
  int b = 3;
  float c = 4.5;

  int sum = a + b;
  int diff = a - b;
  int product = a * b;
  int quotient = a / b;

  printf("%d + %d = %d\n", a, b, sum);
  printf("%d - %d = %d\n", a, b, diff);
  printf("%d * %d = %d\n", a, b, product);
  printf("%d / %d = %d\n", a, b, quotient);

  return 0;
}
