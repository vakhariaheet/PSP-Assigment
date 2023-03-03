/**
 * @file Q14-reverse.c   
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to reverse an array using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
void reverse(int *arr, int len) {
  for (int i = 0; i < len / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
  }
}
int main() {
  int len;
  printf("Enter Length of the Arr:");
  scanf("%d", &len);
  printf("Enter Arr:");
  int arr[len];
  for (int i = 0; i < len; i++) scanf("%d", &arr[i]);
  reverse(arr, len);
  printf("Reversed Arr: ");
  for (int i = 0; i < len; i++) printf("%d ", arr[i]);
  return 0;
}