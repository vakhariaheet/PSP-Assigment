/**
 * @file A2Q29-pAlphaRReverseOther.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints Following Pattern
 *   AAAAA
 *    BBBB
 *     CCC
 *      DD
 *       E
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
  char counter = 'A';
  for (int i = rows; i > 0; i--) {
    for (int j = 0; j <= rows; j++) {
      if (j <= (rows - i))
        printf(" ");
      else
        printf("%c", counter);
    }
    counter++;
    printf("\n");
  }
}