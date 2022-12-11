/**
 * @file A2Q16-prime.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief Checks if a number is prime or not
 * @version 0.1
 * @date 2022-11-19
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int number, isPrime = 1;
  printf("Enter the number: ");
  scanf("%d", &number);
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      isPrime = 0;
      break;
    }
  }
  if (isPrime == 1)
    printf("The number is prime");
  else
    printf("The number is not prime");
}

// Steps
//  1. Take input from user
//  2. Start a for loop from 2 to number-1
//  3. Check if number is divisible by i
//  4. If yes, then set isPrime to 0 and break the loop
//  5. Check if isPrime is 1 or not
//  6.
