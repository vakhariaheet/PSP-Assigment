/**
 * @file Q17-StrCopy.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to copy one string to another.
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <string.h>
int main() {
  char string1[100], string2[100];
  printf("Enter a string");
  scanf("%s", string1);
  strncpy(string2, string1, strlen(string1));
  printf("Copied string is %s", string2);
}