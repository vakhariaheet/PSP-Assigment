/**
 * @file A4Q10-reverse.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Make new array with reverse elements of the given array
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
int main() {
  int size = 5;
  int arr[size], revArr[size];
  printf("Enter elements of array:");
  for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
  for (int i = 0; i < size; i++) revArr[i] = arr[size - i - 1];
  printf("Reverse array is: ");
  for (int i = 0; i < size; i++) printf("%d ", revArr[i]);
}
