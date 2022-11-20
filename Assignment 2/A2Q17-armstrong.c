/**
 * @file A2Q17-armstrong.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Checks if number is a armstrong number or not
 * @version 0.1
 * @date 2022-11-19
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>
int main() {
  int number, digits[50], digitLength = 0, sum = 0;
  printf("Enter a number:");
  scanf("%d", &number);
  for (int i = number; i > 0; i /= 10) {
    digits[digitLength] = i % 10;
    digitLength++;
  }
  for (int i = digitLength - 1; i >= 0; i--) {
    int product = 1;
    for (int j = 1; j <= digitLength; j++) product = product * digits[i];
    sum += product;
  };

  if (sum == number)
    printf("%d is an Armstrong", number);
  else
    printf("%d is not an armstrong", number);
}
