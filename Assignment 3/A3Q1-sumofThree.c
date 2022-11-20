/**
 * @file A3Q1-sumofThree.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Sum of three numbers using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int sum(int num1, int num2, int num3) { return num1 + num2 + num3; }
int main() {
  int num1, num2, num3;
  printf("Enter three numbers:");
  scanf("%d %d %d", &num1, &num2, &num3);
  int result = sum(num1, num2, num3);
  printf("Sum of %d, %d and %d is %d", num1, num2, num3, result);
}