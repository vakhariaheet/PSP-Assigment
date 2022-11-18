/**
 * @file A2Q34oddEven.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief a program which takes a number and checks whether it is odd or even.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int num;

  // Taking input from user
  printf("Enter the a number: ");
  scanf("%d", &num);

  // Checking whether the number is odd or even
  if (num % 2 == 0)
    printf("%d is Even", num);
  else
    printf("%d is Odd", num);
}