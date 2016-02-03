#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void
not_called(void) {
  printf("This was executed\n");
}

void
vuln_f(char *str) {
  char buffer[100];
  strcpy(buffer, str);
}

int
main(int argc, char **argv) {
  vuln_f(argv[1]);
  return 0;
}
