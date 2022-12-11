/**
 * @file A2Q21-pStar.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 * ####
 * ###
 * ##
 * #
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
    for (int j = i; j > 0; j--) {
      printf("#");
    }
    printf("\n");
  }
}