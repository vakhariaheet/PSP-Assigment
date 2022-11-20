/**
 * @file A3Q10-minOf3.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds the minimum of three numbers using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int min(int num1, int num2, int num3);
int main() {
  int num1, num2, num3;
  printf("Enter three numbers:");
  scanf("%d %d %d", &num1, &num2, &num3);
  int result = min(num1, num2, num3);
  printf("Minimum of %d, %d and %d is %d", num1, num2, num3, result);
}
int min(int num1, int num2, int num3) {
  if (num1 < num2 && num1 < num3) {
    return num1;
  } else if (num2 < num1 && num2 < num3) {
    return num2;
  } else {
    return num3;
  }
}