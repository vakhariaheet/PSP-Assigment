/**
 * @file A2Q6-maximumAmong3.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief a program which takes a 3 numbers and checks which is the maximum and
 * smallest among them.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int num1, num2, num3;

  // Taking input from user
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Enter the third number: ");
  scanf("%d", &num3);

  // Checking which is the maximum number
  if (num1 > num2 && num1 > num3)
    printf("%d is the maximum number", num1);
  else if (num2 > num1 && num2 > num3)
    printf("%d is the maximum number", num2);
  else if (num3 > num1 && num3 > num2)
    printf("%d is the maximum number", num3);
  // Exiting the program if all the numbers are equal
  else
    return printf("All the numbers are equal");

  // Checking which is the minimum number
  if (num1 < num2 && num1 < num3)
    printf("%d is the minimum number", num1);
  else if (num2 < num1 && num2 < num3)
    printf("%d is the minimum number", num2);
  else
    printf("%d is the minimum number", num3);
}