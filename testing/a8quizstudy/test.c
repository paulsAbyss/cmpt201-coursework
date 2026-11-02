#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  pid_t p = fork();

  if (p == 0) {
    exit(0); // child exits immediately
  }

  sleep(30); // parent sleeps without waiting
  // child is zombie during these 30 seconds

  return 0;
}
