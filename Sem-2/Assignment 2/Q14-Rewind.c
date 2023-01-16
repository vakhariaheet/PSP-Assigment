/**
 * @file Q14-Rewind.c
 * @author your name (you@domain.com)
 * @brief WAP to demonstrate the use of rewind() function.
 * @version 0.1
 * @date 2023-01-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main() {
  char fileName[20];
  printf("Enter file name: ");
  scanf("%s", fileName);
  FILE *file;
  file = fopen(fileName, "r");
  char c;
  while (c != EOF) {
    printf("%c", c);
    c = fgetc(file);
  }
  printf("\n---------Rewinding---------\n");
  rewind(file);
  c = fgetc(file);
  while (c != EOF) {
    printf("%c", c);
    c = fgetc(file);
  }
}