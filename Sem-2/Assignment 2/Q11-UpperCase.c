/**
 * @file Q10-UpperCase.c
 * @author your name (you@domain.com)
 * @brief WAP to convert all the contents of file into upper case.
 * @version 0.1
 * @date 2023-01-16
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <ctype.h>
#include <stdio.h>
int main() {
  char fileName[20];
  printf("Enter file name: ");
  scanf("%s", fileName);
  FILE *file;
  file = fopen(fileName, "r");
  char c;
  c = fgetc(file);
  while (c != EOF) {
    printf("%c", toupper(c));
    c = fgetc(file);
  }
}