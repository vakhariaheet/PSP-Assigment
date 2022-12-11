/**
 * @file A2Q21-pStar.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 * *
 * **
 * ***
 * ****
 * @version 0.1
 * @date 2022-11-19
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main() {
  int rows;
  printf("Enter a number:");
  scanf("%d", &rows);
  for (int i = 1; i <= rows; i++) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
}