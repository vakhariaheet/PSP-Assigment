/**
 * @file A4Q1-printArray.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Prints an array
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main() {
  int arr[50], arrSize;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &arrSize);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < arrSize; i++) scanf("%d", &arr[i]);
  printf("The elements of the array are: ");
  for (int i = 0; i < arrSize; i++) printf("%d ", arr[i]);
}