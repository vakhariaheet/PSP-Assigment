/**
 * @file A3Q3-square.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds square of a number using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int square(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int result = square(num);
  printf("Square of %d is %d", num, result);
}
int square(int num) { return num * num; }