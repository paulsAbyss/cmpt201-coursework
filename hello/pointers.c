#include <stdint.h>
#include <stdio.h>

void test1(void) {
  int8_t local0 = 1;
  int8_t local_array[3] = {1, 2, 3};
  int8_t local1 = 4;

  printf("before:  local0 = %d\n", local0);

  local_array[3] = 24; // out of bounds: *(local_array + 3)

  printf("after:   local0 = %d\n", local0);
}

int main(void) {
  test1();
  return 0;
}
