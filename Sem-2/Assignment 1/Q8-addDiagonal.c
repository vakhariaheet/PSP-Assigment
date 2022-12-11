/**
 * @file Q8-addDiagonal.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to find addition of Diagonal Elements in Matrix
 * @version 0.1
 * @date 2022-12-11
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int rows, cols;
  printf("Enter no of rows");
  scanf("%d", &rows);
  printf("Enter no of columns");
  scanf("%d", &cols);
  int matrix[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter Element for position (%d,%d)", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    sum += matrix[i][i];
  }
  printf("Sum of Diagonal Elements is %d", sum);
}