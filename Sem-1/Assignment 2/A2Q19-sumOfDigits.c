/**
 * @file A2Q19-sumOfDigits.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds sum of digits of number
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
  int sum = 0;
  for (int i = num; i > 0; i /= 10) {
    sum += i % 10;
  }
  printf("%d", sum);
}