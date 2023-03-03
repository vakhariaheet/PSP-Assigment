/**
 * @file Q17-EvenOdd.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to check whether given number is odd, even or zero Using concept of Pointers and call by refernce
 * @version 0.1
 * @date 2023-03-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int identify(int *num) {
  if (*num == 0) {
    return 0;
  } else if (*num % 2 == 0) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  int *ptrNum = &num;
  int result = identify(ptrNum);
  if (result == 0) {
    printf("Number is Zero");
  } else if (result == 1) {
    printf("Number is Even");
  } else {
    printf("Number is Odd");
  }
  return 0;
}