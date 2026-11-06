#include <stdio.h>

int main() {
  /* variables cannot change types however, a variable's value can change*/
  int wayne_int_size = 64;
  wayne_int_size = 32;

  printf("Wayne int size: %d bits\n", wayne_int_size);
  return 0;
}
