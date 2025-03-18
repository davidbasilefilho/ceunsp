#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("Hello, World!\n");
  printf("Shine On You, Crazy Diamond!\n");
  printf("\nWhat is your name?\n");

  char *name;
  scanf("%s", name);

  printf("Hello, %s!\n", name); // Use the name
  getchar();
  return 0;
}
