/**
 * @file Q2-print3d.c
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief WAP to read and print 3-Dimensional matrix.
 * @version 0.1
 * @date 2022-12-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int rows, cols, height;
  printf("Enter no of rows: ");
  scanf("%d", &rows);
  printf("Enter no of columns: ");
  scanf("%d", &cols);
  printf("Enter no of Height: ");
  scanf("%d", &height);
  int matrix[height][rows][cols];
  for (int k = 0; k < height; k++) {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        printf("Enter Element for position (%d,%d,%d)", k + 1, i + 1, j + 1);
        scanf("%d", &matrix[k][i][j]);
      }
    }
  }
  for (int k = 0; k < height; k++) {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        printf("%d", matrix[k][i][j]);
      }
      printf("\n");
    }
    printf("----------------------------------\n");
  }
}