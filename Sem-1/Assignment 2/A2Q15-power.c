/**
 * @file A2Q15-power.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds the power of a number
 * @version 0.1
 * @date 2022-11-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main() {
  int number, power, result;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("Enter the power: ");
  scanf("%d", &power);
  result = 1;
  for (int i = 1; i <= power; i++) {
    result *= number;
  }
  printf("The result is %d", result);
  return 0;
}