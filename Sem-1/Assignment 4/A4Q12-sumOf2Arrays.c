/**
 * @file A4Q12-sumOf2Arrays.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Adds two arrays and stores in third array
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int arr1[50], arr2[50], arr3[50], arrSize;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &arrSize);
  printf("Enter the elements of the first array: ");
  for (int i = 0; i < arrSize; i++) scanf("%d", &arr1[i]);
  printf("Enter the elements of the second array: ");
  for (int i = 0; i < arrSize; i++) scanf("%d", &arr2[i]);
  for (int i = 0; i < arrSize; i++) arr3[i] = arr1[i] + arr2[i];
  printf("The elements of the third array are: ");
  for (int i = 0; i < arrSize; i++) printf("%d ", arr3[i]);
}
