/**
 * @file A2Q21-pStar.C
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 * A
 * AB
 * ABC
 * ABCD
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
    char counter = 'A';
    for (int j = 0; j < i; j++) {
      printf("%c", counter);
      counter++;
    }
    printf("\n");
  }
}