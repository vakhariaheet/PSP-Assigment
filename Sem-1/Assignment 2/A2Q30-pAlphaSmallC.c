/**
 * @file A2Q30-pAlphaSmallC.c
 * @author Heet Vakharia (query@heetvakharia.in
 * @brief Prints Following Pattern
 * abcd
 * abc
 * ab
 * a
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
    char counter = 'a';
    for (int j = i; j > 0; j--) {
      printf("%c", counter);
      counter++;
    }
    printf("\n");
  }
}