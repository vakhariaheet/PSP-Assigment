/**
 * @file A4Q8-avgOfArray.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds average of an array
 * @version 0.1
 * @date 2022-11-20
 * @copyright Copyright (c) 2022
 */
#include <stdio.h>
int main() {
  int size, arr[50];
  printf("Enter size of array:");
  scanf("%d", &size);
  printf("Enter elements of array:");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  int avg = sum / size;
  printf("Average of array is %d", avg);
}
