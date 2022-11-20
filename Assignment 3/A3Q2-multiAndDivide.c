/**
 * @file A3Q2-multiAndDivide.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Multiplies and divides two numbers using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int multiply(int num1, int num2);
int divide(int num1, int num2);
int main() {
  int num1, num2;
  printf("Enter two numbers:");
  scanf("%d %d", &num1, &num2);
  int product = multiply(num1, num2);
  printf("Multiplication of %d and %d is %d\n", num1, num2, product);
  int quotant = divide(num1, num2);
  printf("Division of %d and %d is %d", num1, num2, quotant);
}
int multiply(int num1, int num2) { return num1 * num2; }
int divide(int num1, int num2) { return num1 / num2; }