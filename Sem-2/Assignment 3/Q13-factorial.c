/**
 * @file Q13-factorial.c    
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to find factorial of a number using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
int factorial(int *num) {
  int fact = 1;
  for (int i = 1; i <= *num; i++) {
    fact *= i;
  }
  return fact;
}
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  printf("Factorial of %d is %d", *ptrNum, factorial(ptrNum));
  return 0;
}
