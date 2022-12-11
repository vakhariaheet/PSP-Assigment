/**
 * @file A3Q15-primeNumberInRange.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds prime numbers in a range using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int checkPrime(int num);
int main() {
  int start, end;
  printf("Enter the starting number:");
  scanf("%d", &start);
  printf("Enter the ending number:");
  scanf("%d", &end);
  for (int i = start; i <= end; i++) {
    int isPrime = checkPrime(i);
    if (isPrime == 1) printf("%d ", i);
  }
}