#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main(void) {
  char *line = NULL;
  size_t cap = 0; // buffer size: size_t (unsigned)
  while (1) {
    printf("Please enter some text: ");
    fflush(stdout);
    ssize_t n = getline(&line, &cap, stdin); // n: ssize_t (can be -1)
    if (n == -1)
      break; // EOF or error
    if (n > 0 && line[n - 1] == '\n')
      line[n - 1] = '\0';
    printf("Tokens:\n");
    char *save = NULL;
    for (char *tok = strtok_r(line, " ", &save); tok != NULL; tok = strtok_r(NULL, " ", &save)) {
      printf("  %s\n", tok);
    }
  }
  free(line);
  return 0;
}
