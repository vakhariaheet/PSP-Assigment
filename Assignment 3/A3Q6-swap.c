/**
 * @file A3Q6-swap.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief  Swaps two numbers using functions
 * @version 0.1
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
void swap();
int main() { swap(); }
void swap() {
  int num1, num2;
  printf("Enter two numbers:");
  scanf("%d %d", &num1, &num2);
  printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
  int temp = num1;
  num1 = num2;
  num2 = temp;
  printf("After swapping, num1 = %d and num2 = %d", num1, num2);
  return;
}

/******************************************
 * With Pointers ( Out of Scope )
 ********************************************/
// #include <stdio.h>
// void swap(int* num1, int* num2);
// int main() {
//   int num1, num2;
//   printf("Enter two numbers:");
//   scanf("%d %d", &num1, &num2);
//   printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
//   swap(&num1, &num2);
//   printf("After swapping, num1 = %d and num2 = %d", num1, num2);
// }
// void swap(int* num1, int* num2) {
//   int temp = *num1;
//   *num1 = *num2;
//   *num2 = temp;
//   return;
// }
