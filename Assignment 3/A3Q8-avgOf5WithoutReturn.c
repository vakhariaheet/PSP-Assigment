/**
 * @file A3Q8-avgOf5WithoutReturn.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds average of 5 marks using function without using  return
 * statement
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
void avgOf5(int num1, int num2, int num3, int num4, int num5);
int main() {
  int mark1, mark2, mark3, mark4, mark5;
  printf("Enter marks of 5 subjects:");
  scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
  avgOf5(mark1, mark2, mark3, mark4, mark5);
}
void avgOf5(int num1, int num2, int num3, int num4, int num5) {
  int sum = num1 + num2 + num3 + num4 + num5;
  float avg = sum / 5.0;
  printf("Average of 5 marks is %.2f", avg);
}