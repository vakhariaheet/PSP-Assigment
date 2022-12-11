/**
 * @file Q21-SubStr.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to find a substring in a string.
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <string.h>
int main() {
  char string[100], subString[100];
  printf("Enter a string");
  scanf("%s", string);
  printf("Enter a substring");
  scanf("%s", subString);
  if (strstr(string, subString) != NULL)
    printf("Substring found");
  else
    printf("Substring not found");
}