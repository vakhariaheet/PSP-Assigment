/**
 * @file A3Q4-cube.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief  Finds cube of a number using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int cube(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int result = cube(num);
  printf("Cube of %d is %d", num, result);
}
int cube(int num) { return num * num * num; }