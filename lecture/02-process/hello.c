#include <stdio.h>
#include <unistd.h>

int main() {

  printf("Helloworld!\n");

  for (int i = 0; i < 10; i++) {
    sleep(2);
    printf("Helloworld!\n");
  }
}
