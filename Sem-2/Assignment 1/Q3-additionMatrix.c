/**
 * @file Q3-additionMatrix.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to perform two 2-Dimensional Matrix addition
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
  int matrix2[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter Element for position (%d,%d) For Matrix 1", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter Element for position (%d,%d) For Matrix 2", i + 1, j + 1);
      scanf("%d", &matrix2[i][j]);
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d", matrix[i][j] + matrix2[i][j]);
    }
    printf("\n");
  }
}