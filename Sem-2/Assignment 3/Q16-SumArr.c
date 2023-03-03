/**
 * @file Q16-SumArr.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to find sum of all elements of an array using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
int sum(int *arr, int len);
int main() {
  int len;
  printf("Enter Length of the Arr:");
  scanf("%d", &len);
  printf("Enter Arr:");
  int arr[len];
  for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
  int *ptrArr = arr;
  int sumArr = sum(ptrArr, len);
  printf("Sum of all elements of the array is: %d", sumArr);
  return 0;
}
int sum(int *arr, int len) {
  int sum = 0;
  int *ptr = arr;
  for (int i = 0; i < len; i++) {
    sum += *ptr;
    ptr++;
  }
  return sum;
}
