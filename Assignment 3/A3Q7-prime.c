/**
 * @file A3Q7-prime.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds if a number is prime or not using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int checkPrime(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  int isPrime = checkPrime(num);
  if (isPrime == 1)
    printf("%d is prime", num);
  else
    printf("%d is not prime", num);
}
int checkPrime(int num) {
  for (int i = 2; i <= num / 2; ++i)
    if (num % i == 0) return 0;
  return 1;
}