/**
 * @file Q18-AddSub.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a menu driven program for addition, subtraction of 5 values
 * using concept of pointers and call by value
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

int add(int *a, int *b, int *c, int *d, int *e) {
  return *a + *b + *c + *d + *e;
}
int sub(int *a, int *b, int *c, int *d, int *e) {
  return *a - *b - *c - *d - *e;
}

int main() {
  int a, b, c, d, e;
  printf("Enter 5 Numbers: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  int *ptrA = &a, *ptrB = &b, *ptrC = &c, *ptrD = &d, *ptrE = &e;
  int choice;
  printf("====================================\n");
  printf("1. Add 5 Numbers\n");
  printf("2. Subtract 5 Numbers\n");
  printf("====================================\n");
  printf("Enter Choice: ");
  scanf("%d", &choice);
  if (choice == 1) {
    printf("Sum of 5 Numbers: %d", add(ptrA, ptrB, ptrC, ptrD, ptrE));
  } else if (choice == 2) {
    printf("Difference of 5 Numbers: %d", sub(ptrA, ptrB, ptrC, ptrD, ptrE));
  } else {
    printf("Invalid Choice");
  }
}
