/**
 * @file Q14-CharCheck.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to check if a character is a digit, alphabet or special character.
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
  if (character >= '0' && character <= '9')
    printf("Character is a digit");
  else if ((character >= 'a' && character <= 'z') ||
           (character >= 'A' && character <= 'Z'))
    printf("Character is an alphabet");
  else
    printf("Character is a special character");
}