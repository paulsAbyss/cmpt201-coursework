#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  pid_t pid = fork();

  if (pid == 0) {
    printf("CHILD:  PID=%d, PARENT PID=%d\n", getpid(), getppid());
  } else {
    printf("PARENT: PID=%d, CHILD PID=%d\n", getpid(), pid);
  }
}
