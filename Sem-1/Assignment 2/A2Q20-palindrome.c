/**
 * @file A2Q20-palindrome.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Checks if Number is palindrome or not
 * @version 0.1
 * @date 2022-11-19
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int reverse = 0;
  for (int i = num; i > 0; i /= 10) {
    reverse = (reverse * 10) + (i % 10);
  }
  if (reverse == num)
    printf("%d is palindrome", num);
  else
    printf("%d is not palindrome", num);
}