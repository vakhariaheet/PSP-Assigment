/**
 * @file Q2-AddSub.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to add, subtract and multiply two complex numbers
 * using structures to function.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

struct Complex {
  int real;
  int imag;
};

struct Complex add(struct Complex a, struct Complex b) {
  struct Complex c;
  c.real = a.real + b.real;
  c.imag = a.imag + b.imag;
  return c;
}

struct Complex sub(struct Complex a, struct Complex b) {
  struct Complex c;
  c.real = a.real - b.real;
  c.imag = a.imag - b.imag;
  return c;
}

struct Complex mul(struct Complex a, struct Complex b) {
  struct Complex c;
  c.real = a.real * b.real;
  c.imag = a.imag * b.imag;
  return c;
}

int main() {
  struct Complex a, b, c;
  printf("Enter the real and imaginary part of first complex number: ");
  scanf("%d %d", &a.real, &a.imag);
  printf("Enter the real and imaginary part of second complex number: ");
  scanf("%d %d", &b.real, &b.imag);
  printf("===========================\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("===========================\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            c = add(a, b);
            printf("Sum of two complex numbers is: %d + %di", c.real, c.imag);
            break;
        case 2:
            c = sub(a, b);
            printf("Difference of two complex numbers is: %d + %di", c.real, c.imag);
            break;
        case 3:
            c = mul(a, b);
            printf("Product of two complex numbers is: %d + %di", c.real, c.imag);
            break;
        default:
            printf("Invalid choice");
    }
}