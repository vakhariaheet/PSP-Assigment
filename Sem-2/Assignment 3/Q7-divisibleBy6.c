/**
 * @file Q7-divisibleBy6.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to display the given number is divisible by 6 or not take number with function and pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
int isDivisibleBy6(int *num) {
  return *num % 6 == 0;
}
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  if (isDivisibleBy6(ptrNum)) {
    printf("Number is Divisible by 6");
  } else {
    printf("Number is not Divisible by 6");
  }
  return 0;
}