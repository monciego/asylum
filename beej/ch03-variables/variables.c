#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int i;
  float f;
  char *s = "Hi";
  bool x = true;

  i = 2;
  f = 2.13;

  printf("String: %s\nInt: %d\nFloat %f\n", s, i, f);

  if (x) {
    printf("x is true\n");
  }

  return 0;
}
