/**
 * @file Q3-swap.c  
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to swap two arrays using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
void swap(int *arr1, int *arr2, int len) {
  for (int i = 0; i < len; i++) {
    int temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}
int main(){
    int len;
    printf("Enter Length of the Arr:");
    scanf("%d", &len);
    printf("Enter Arr1:");
    int arr1[len];
    for (int i = 0; i < len; i++) scanf("%d", &arr1[i]);
    printf("Enter Arr2:");
    int arr2[len];
    for (int i = 0; i < len; i++) scanf("%d", &arr2[i]);
    swap(arr1, arr2, len);
    printf("Arr1: ");
    for (int i = 0; i < len; i++) printf("%d ", arr1[i]);
    printf("\nArr2: ");
    for (int i = 0; i < len; i++) printf("%d ", arr2[i]);
    return 0;

}