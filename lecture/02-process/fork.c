#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  fork();
  for (int i = 0; i < 5; i++) {

    sleep(1);
    printf("sleeping !!\n");
  }
}
