/**
 * @file A2Q11-Grade.c
 * @author Heet Vakharia (query@heetvakharia.in_
 * @brief A program which takes percentage and calculates the grade.
 * @version 0.1
 * @date 2022-11-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int percentage;
  printf("Enter the percentage: ");
  scanf("%d", &percentage);
  if (percentage >= 80)
    printf("Grade A");
  else if (percentage >= 70)
    printf("Grade B");
  else if (percentage >= 60)
    printf("Grade C");
  else if (percentage >= 50)
    printf("Grade D");
  else if (percentage >= 35)
    printf("Grade E");
  else
    printf("Grade F");
  return 0;
}