/**
 * @file Q11-distance.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program which will read two distances in feet and inches and
 * add them; final result will be printed in the form of feet and inches using
 * structure.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

struct Distance {
  int feet;
  int inches;
};

int main() {
  struct Distance d1, d2, d3;
  printf("Enter the first distance in feet: ");
  scanf("%d", &d1.feet);
  printf("Enter the first distance in inches: ");
  scanf("%d", &d1.inches);
  printf("Enter the second distance in feet: ");
  scanf("%d", &d2.feet);
  printf("Enter the second distance in inches: ");
  scanf("%d", &d2.inches);
  d3.feet = d1.feet + d2.feet;
  d3.inches = d1.inches + d2.inches;
  if (d3.inches > 12) {
    d3.feet += 1;
    d3.inches -= 12;
  }
  printf("=============================================================\n");
  printf("First Distance: %d feet %d inches \n", d1.feet, d1.inches);
  printf("Second Distance: %d feet %d inches \n", d2.feet, d2.inches);
  printf("Total Distance: %d feet %d inches \n", d3.feet, d3.inches);
  printf("=============================================================\n");
}