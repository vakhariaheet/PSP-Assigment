/**
 * @file A2Q21-pStar.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 * 1
 * 12
 * 123
 * 1234
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
    int counter = 0;
    for (int j = 0; j < i; j++) {
      counter++;
      printf("%d", counter);
    }
    printf("\n");
  }
}