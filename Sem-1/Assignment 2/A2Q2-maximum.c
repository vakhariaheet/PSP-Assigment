/**
 * @file A2Q2-maximum.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief a program which takes two numbers and find the maximum out of them.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int num1, num2;
  // Taking input from user
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  // Checking which number is greater
  if (num1 > num2)
    printf("%d is greater than %d", num1, num2);
  else if (num2 > num1)
    printf("%d is greater than %d", num2, num1);
  else
    printf("Both numbers are equal");
}