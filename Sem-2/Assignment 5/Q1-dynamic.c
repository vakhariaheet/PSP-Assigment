/**
 * @file Q1-dynamic.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to display use of calloc, malloc, realloc, and free
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
  int choice = 0, size = 0;
  int *ptr = NULL;
  printf("===========================================\n");
  printf("1. Allocate Memory using malloc\n");
  printf("2. Allocate Memory using calloc\n");
  printf("===========================================\n");
  printf("Enter Choice: ");
  scanf("%d", &choice);
  printf("Enter Size: ");
  scanf("%d", &size);
  if (choice == 1) ptr = malloc(size * sizeof(int));
  if (choice == 2) ptr = calloc(size, sizeof(int));
  if (ptr == NULL) {
    printf("Memory Allocation Failed");
    return 0;
  }
  printf("Enter Elements: ");
  for (int i = 0; i < size; i++) scanf("%d", &ptr[i]);
  printf("Elements: ");
  for (int i = 0; i < size; i++) printf("%d ", ptr[i]);
  printf("\n");
  ptr = realloc(ptr, size * 2 * sizeof(int));
  if (ptr == NULL) {
    printf("Memory Allocation Failed");
    return 0;
  }
  printf("Enter New Elements: ");
  for (int i = 0; i < size; i++) scanf("%d", &ptr[i]);
  printf("\n");
  printf("Elements: ");
  for (int i = 0; i < size; i++) printf("%d ", ptr[i]);
  free(ptr);
  return 0;
}