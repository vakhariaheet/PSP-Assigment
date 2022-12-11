/**
 * @file A3Q11-factorial.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds factorial of a number using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int factorial(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int result = factorial(num);
  printf("Factorial of %d is %d", num, result);
}
int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; i++) {
    fact = fact * i;
  }
  return fact;
}
