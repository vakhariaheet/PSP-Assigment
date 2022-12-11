/**
 * @file Q15-toUpper.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to check if the character is in lower case or upper case
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  char character;
  printf("Enter a character");
  scanf("%c", &character);
  if (character >= 'a' && character <= 'z')
    printf("Character is in lower case");
  else if (character >= 'A' && character <= 'Z')
    printf("Character is in upper case");
  else
    printf("Character is not an alphabet");
}
