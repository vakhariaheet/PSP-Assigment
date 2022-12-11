/**
 * @file   A2Q28-pDigitCReverseOther.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 *     1
 *    11
 *   111
 *  1111
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
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= rows; j++) {
      if (j < (rows - i))
        printf(" ");
      else
        printf("1");
    }
    printf("\n");
  }
}