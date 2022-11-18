/**
 * @file A2Q14-reverse.c
 * @author Heet Vakharia(quey@heetvakharia.in)
 * @brief a program which takes a number and reverse it.
 * @version 0.1
 * @date 2022-11-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int main() {
  int num, reverse = 0, remainder;
  // Taking input from user
  printf("Enter the a number: ");
  scanf("%d", &num);
  // Reversing the number
  while (num != 0) {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num /= 10;
  }
  printf("Reversed number is %d", reverse);
}