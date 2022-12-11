/**
 * @file A3Q14-areaOfCircleWithoutReturn.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Finds area of a circle using functions without return type
 * @version 0.1
 * @date 2022-11-20
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

void areaOfCircle(int radius);
int main() {
  int radius;
  printf("Enter radius of circle:");
  scanf("%d", &radius);
  areaOfCircle(radius);
}
void areaOfCircle(int radius) {
  const float PI = 3.14;
  float area = PI * radius * radius;
  printf("Area of circle is %f", area);
}