/**
 * @file A2Q12-fibonacciSeries.C
 * @author Heet Vakharia (query@heetvakharia.in
 * @brief Program to print the fibonacci series.
 * @version 0.1
 * @date 2022-11-18
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int main() {
  int totalLength = 0;

  printf("Enter the length of the series: ");
  scanf("%d", &totalLength);
  int previousNumber = 0;
  int currentNumber = 1;
  printf("Fibonacci Series : \n 0 1");
  for (int i = 0; i < totalLength - 2; i++) {
    int temp = previousNumber;
    previousNumber = currentNumber;
    currentNumber += temp;
    printf(" %d ", currentNumber);
  }
}