/**
 * @file A2Q3-positiveNegative.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief A program which checks whether the blood donor is eligible or not for
 * donating blood using if statement. A blood donor is eligible if below
 * conditions are satisfied : a) Age should be above 18 yrs but not more than
 * 55yrs. b) Weight should be more than 45kgs.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int age, weight;

  // Taking input from user
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your weight: ");
  scanf("%d", &weight);

  // Checking whether the donor is eligible or not
  if (age > 18 && age <= 55 && weight > 45)
    printf("You are eligible to donate blood");
  else
    printf("You are not eligible to donate blood");
}