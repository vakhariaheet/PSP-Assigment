/**
 * @file   A2Q28-pDigitCReverseOther.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 *   12345
 *    2345
 *     345
 *      45
 *       5
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
  for (int i = rows; i > 0; i--) {
    for (int j = 0; j <= rows; j++) {
      if (j <= (rows - i))
        printf(" ");
      else
        printf("%d", j);
    }
    printf("\n");
  }
}