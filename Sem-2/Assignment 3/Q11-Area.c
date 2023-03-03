/**
 * @file Q11-Area.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to calculate Area of Square and circle using Pointer
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

#define PI 3.14

float areaOfSquare(float *side) { return *side * *side; }
float areaOfCircle(float *radius) { return PI * (*radius) * (*radius); }

int main() {
  float side, radius;
  printf("Enter Side of Square: ");
  scanf("%f", &side);
  printf("Enter Radius of Circle: ");
  scanf("%f", &radius);
  float *ptrSide = &side;
  float *ptrRadius = &radius;
  printf("Area of Square is %.2f\n", areaOfSquare(ptrSide));
  printf("Radius of Circle is %.2f", areaOfCircle(ptrRadius));
  return 0;
}