/**
 * @file A2Q3-positiveNegative.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief a program which takes a number and checks whether it is positive or
 * negative.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int num;

  // Taking input from user
  printf("Enter the a number: ");
  scanf("%d", &num);

  // Checking whether the number is positive or negative or zero
  if (num < 0)
    printf("%d is Negative", num);
  else if (num > 0)
    printf("%d is Positive", num);
  else
    printf("Number is Zero");
}