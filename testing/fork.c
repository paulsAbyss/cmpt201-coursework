#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  pid_t pid = fork();

  int i = 1;
  if (pid == 0) {
    i++;
    sleep(1);
    printf("Still sleeping!");
    return 0;

  } else {
    if (i == 10)
  }
}
