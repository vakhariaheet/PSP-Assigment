/**
 * @file A4Q5-countEven.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Counts even numbers in array
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
    if (arr[i] % 2 == 0) count++;

  printf("The number of even elements in the array are: %d", count);
}