/**
 * @file Q10-SymmetricMatrix.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to check if a matrix is symmetric or not.
 * @version 0.1
 * @date 2022-12-11
 *
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
  int isSymmetric = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] != matrix[j][i]) isSymmetric = 0;
    }
  }
  if (isSymmetric)
    printf("Matrix is Symmetric Matrix");
  else
    printf("Matrix is not Symmetric Matrix");
}