/**
 * @file Q16-sizeWithLoop.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to find length of a string using loop.
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  int length = 0;
  while (string[length] != '\0') {
    length++;
  }
  printf("Length of string is %d", length);
}