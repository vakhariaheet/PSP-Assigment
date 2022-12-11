/**
 * @file Q1-print2D.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief  WAP to read and print 2-Dimensional matrix.
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
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d", matrix[i][j]);
    }
    printf("\n");
  }
}