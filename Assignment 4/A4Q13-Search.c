/**
 * @file A4Q13-Search.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Search an element in an array
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
int main() {
  int arr[50], arrSize, search;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &arrSize);
  printf("Enter the elements of the array: ");
  for (int i = 0; i < arrSize; i++) scanf("%d", &arr[i]);
  printf("Enter the element to search: ");
  scanf("%d", &search);
  for (int i = 0; i < arrSize; i++) {
    if (arr[i] == search) {
      printf("Element found at index %d", i);
      break;
    }
  }
}