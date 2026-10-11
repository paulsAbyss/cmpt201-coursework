#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

  pid_t = fork();

  if (pid == 0) {
    exec("ls -a -l -h")
  } else {
    execl("ls -a");
  }

  printf("%d\n, getpid()")
}
