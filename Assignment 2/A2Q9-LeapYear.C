/**
 * @file A2Q9-LeapYear.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Program to check whether the year is leap year or not.
 * @version 0.1
 * @date 2022-11-17
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int main() {
  int year;

  // Taking input from user
  printf("Enter the year: ");
  scanf("%d", &year);

  // Checking whether the year is Leap Year
  if (year % 4 == 0) {
    if (year % 100 != 0) {
      printf("%d is a Leap Year", year);
    } else if (year % 400 == 0) {
      printf("%d is a Leap Year", year);
    } else {
      printf("%d is not a Leap Year", year);
    }
  } else
    printf("%d is not a Leap Year", year);
}