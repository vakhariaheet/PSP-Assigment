/**
 * @file Q6-EvenOdd.c   
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to check whether the number is even or odd using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
int isEven(int *num) {
  return *num % 2 == 0;
}
int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  if (isEven(ptrNum)) {
    printf("Number is Even");
  } else {
    printf("Number is Odd");
  }
  return 0;
}