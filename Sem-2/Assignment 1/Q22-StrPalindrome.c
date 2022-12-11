/**
 * @file Q22-StrPalindrome.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to check if a string is palindrome or not.
 * @version 0.1
 * @date 2022-12-11
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <string.h>
int main() {
  char string[100];
  printf("Enter a string");
  scanf("%s", string);
  int length = strlen(string);
  int isPalindrome = 1;
  for (int i = 0; i < length / 2; i++) {
    if (string[i] != string[length - i - 1]) {
      isPalindrome = 0;
      break;
    }
  }
  if (isPalindrome)
    printf("String is palindrome");
  else
    printf("String is not palindrome");
}