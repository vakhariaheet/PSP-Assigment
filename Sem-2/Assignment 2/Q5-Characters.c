/**
 * @file Q5-Characters.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-01-16
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int main() {
  int count;
  char fileName[20];
  printf("Enter file name: ");
  scanf("%s", fileName);
  FILE *file;
  file = fopen(fileName, "r");
  char c;
  c = fgetc(file);
  while (c != EOF) {
    count++;
  }
}