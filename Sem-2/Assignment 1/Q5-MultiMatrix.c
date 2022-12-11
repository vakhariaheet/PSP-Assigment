/**
 * @file Q5-MultiMatrix.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to perform two 2-Dimensional Matrix multiplication
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
      int sum = 0;
      for (int k = 0; k < rows; k++) {
        sum += matrix[i][k] * matrix2[k][j];
      }
      printf("%d", sum);
    }
    printf("\n");
  }
}