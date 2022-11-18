/**
 * @file A2Q5-vowel.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief a program which takes a character and checks whether it is vowel or
 * consonant.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  char letter;

  // Taking input from user
  printf("Enter the a alphabet: ");
  scanf("%c", &letter);

  // Checking whether the letter is vowel or consonant using switch case
  switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("%c is Vowel", letter);
      break;
    default:
      printf("%c is Consonant", letter);
      break;
  }
}