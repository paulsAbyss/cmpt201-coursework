#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid = fork();

  if (pid != 0) {
    return 0;
  } else {
    while (1) {
      sleep(1);
    }
  }
}
