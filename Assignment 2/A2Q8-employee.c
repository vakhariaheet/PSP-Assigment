/**
 * @file A2Q8-employee.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief  Program to check whether Employee is taxable or not
 * @version 0.1
 * @date 2022-11-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int salary;
  char gender;
  // Taking input from user
  printf("Please enter your gender (M/F): ");
  scanf("%c", &gender);
  printf("Please enter your salary: ");
  scanf("%d", &salary);

  // Taxable Amount For Male is 1,50,000 and Female is 1,80,000
  if ((gender == 'M' && salary > 150000) || gender == 'F' && salary > 180000)
    printf("You are Taxable");
  else
    printf("You are not Taxable");
}