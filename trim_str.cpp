#include <stdio.h>
#include "trim.h"

#define STRLEN 16

int main(int argc, char const *argv[]) {
  char input[STRLEN];
  printf("Please type any string that should be trimmed: ");
  scanf("%s",input);
  printf("%s",input);
  return 0;
}
