/**
 * @file A3Q5-evenOdd.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief  Finds if a number is even or odd using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int checkEven(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int isEven = checkEven(num);
  if (isEven == 1)
    printf("%d is even", num);
  else
    printf("%d is odd", num);
}
int checkEven(int num) { return num % 2 == 0; }
