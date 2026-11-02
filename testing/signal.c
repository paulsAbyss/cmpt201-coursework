#define _POSIX_C_SOURCE 200809
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static char *message = "CTRL-C PRESSED";

void sig_handler(int signum) { write(STDOUT_FILENO, message, strlen(message)); }

int main() {
  pid_t pid = fork();

  if (pid != 0) {
    struct sigaction act;

    act.sa_handler = sig_handler;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);

    int ret = sigaction(SIGINT, &act, NULL);
    if (ret == -1) {
      perror("Failed");
      exit(EXIT_FAILURE);
    }

    while (1) {
      sleep(1);
    }
  } else {
    sleep(1);
    while (1) {
      sleep(1);
      kill(getppid(), SIGINT);
    }
  }
}
