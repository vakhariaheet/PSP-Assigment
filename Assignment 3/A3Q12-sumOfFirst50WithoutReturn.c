/**
 * @file A3Q12-sumOfFirst50WithoutReturn.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds sum of first 50 natural numbers using functions without return
 * type
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int sumOfFirst50();
int main() { sumOfFirst50(); }
int sumOfFirst50() {
  int sum = 0;
  for (int i = 1; i <= 50; i++) {
    sum += i;
  }
  printf("Sum of first 50 natural numbers is %d", sum);
}
