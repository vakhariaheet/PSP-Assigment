/**
 * @file Q20-LowerToUpper.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to Replace Lowercase Characters by Uppercase & Vice-Versa
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <ctype.h>
#include <string.h>

int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  for (int i = 0; i < strlen(string); i++) {
    if (islower(string[i]))
      string[i] = toupper(string[i]);
    else if (isupper(string[i]))
      string[i] = tolower(string[i]);
  }
  printf("Converted string is %s", string);
}