/**
 * @file Q15-Diff.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to find Difference between two float Pointers
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
float diff(float *num1, float *num2) {
  return *num1 - *num2;
}
int main() {
  float num1, num2;
  printf("Enter Number 1: ");
  scanf("%f", &num1);
  printf("Enter Number 2: ");
  scanf("%f", &num2);
  float *ptrNum1 = &num1;
  float *ptrNum2 = &num2;
  printf("Difference between %f and %f is %f", *ptrNum1, *ptrNum2, diff(ptrNum1, ptrNum2));
  return 0;
}