/**
 * @file A3Q13-table.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints multiplication table of a number using functions
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int table(int num);
int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  table(num);
}
int table(int num) {
  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", num, i, num * i);
  }
}