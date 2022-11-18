/**
 * @file A2Q10-Calc.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Basic Calculator
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  char operator;
  double num1, num2;
  printf("================Calculator================\n");
  printf(
      " + for addition \n - for subtraction \n * for multiplication \n / for "
      "division \nEnter the operator: ");
  scanf("%c", &operator);
  printf("===========================================\n");
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;
    default:
      printf("Error! operator is not correct");
      break;
  }
}