/**
 * @file A3Q9-maxOf2.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds maximum of two numbers using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int max(int num1, int num2);
int main() {
  int num1, num2;
  printf("Enter two numbers:");
  scanf("%d %d", &num1, &num2);
  int result = max(num1, num2);
  printf("Maximum of %d and %d is %d", num1, num2, result);
}
int max(int num1, int num2) {
  if (num1 > num2) {
    return num1;
  } else {
    return num2;
  }
}