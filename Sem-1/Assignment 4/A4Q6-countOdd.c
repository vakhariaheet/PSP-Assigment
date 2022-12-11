/**
 * @file A4Q6-countOdd.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Counts all odd numbers from array
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
  int count = 0;
  for (int i = 0; i < arrSize; i++)
    if (arr[i] % 2 == 1) count++;

  printf("The number of odd elements in the array are: %d", count);
}