#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
int main() {
  int i = 0;
  while (true) {

    printf("%d\n", i);
    i++;
    sleep(1);
  }
}
