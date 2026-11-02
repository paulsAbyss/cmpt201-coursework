#include <stdio.h>
#include <stdlib.h>
int main() {
  int *x = malloc(sizeof(int));
  int *arr = malloc(sizeof(int) * 5);

  *x = 120;
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 2;

  int *darr;

  darr = realloc(arr, 10 * sizeof(int));
  arr = darr;
  darr[9] = 999;

  for (int i = 0; i < 10; i++) {
    printf("darr[%d] = %d\n", i, arr[i]);
  }
}
