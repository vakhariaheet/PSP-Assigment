/**
 * @file Q9-IdentityMatrix.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to check if a matrix is an identity matrix or not.
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
  int isIdentity = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (i == j && matrix[i][j] != 1)
        isIdentity = 0;
      else if (i != j && matrix[i][j] != 0)
        isIdentity = 0;
    }
  }
  if (isIdentity)
    printf("Matrix is Identity Matrix");
  else
    printf("Matrix is not Identity Matrix");
}