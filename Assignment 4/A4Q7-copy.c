/**
 * @file A4Q7-copy.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Copies an array to another array
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int arr[50], copy[50], arrSize;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &arrSize);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < arrSize; i++) scanf("%d", &arr[i]);
  for (int i = 0; i < arrSize; i++) copy[i] = arr[i];
  printf("The elements of the copied array are: ");
  for (int i = 0; i < arrSize; i++) printf("%d ", copy[i]);
}