/**
 * @file A2Q18-table.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Print Multiplication
 * @version 0.1
 * @date 2022-11-19
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int num = 0;
  printf("Enter the number");
  scanf("%d", &num);
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n", num, i, i * num);
  }
}