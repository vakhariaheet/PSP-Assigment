/**
 * @file A2Q13-evenInRange.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Program to print even numbers in the range
 * @version 0.1
 * @date 2022-11-18
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main() {
  int lowerLimit, upperLimit;
  printf("Enter the LowerLimit: ");
  scanf("%d", &lowerLimit);
  printf("Enter the UpperLimit: ");
  scanf("%d", &upperLimit);
  printf("Even number in the Range are :");
  for (int i = lowerLimit; i <= upperLimit; i++)
    if (i % 2 == 0) printf(" %d ", i);
}