#include <stdio.h>

int main() {
  int wayne_default_max_threads = 8;
  char wayne_default_perms = 'r';
  float wayne_default_pi = 3.141592;
  char *wayne_title = "Wayne";

  printf("Default max threads: %d\n", wayne_default_max_threads);
  printf("Custom Perms: %c\n", wayne_default_perms);
  printf("Constant pi value: %f\n", wayne_default_pi);
  printf("Wayne title: %s\n", wayne_title);

  return 0;
}
