/**
 * @file Q12-intUnion.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program which will read an integer number and extract its bytes using union.
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

union Integer {
  int num;
  char bytes[4];
};

int main() {
  union Integer i;
  printf("Enter an integer number: ");
  scanf("%d", &i.num);
  printf("=============================================================\n");
  printf("Integer Number: %d \n", i.num);
  printf("Byte 1: %02X \n", i.bytes[0]);
  printf("Byte 2: %02X \n", i.bytes[1]);
  printf("Byte 3: %02X \n", i.bytes[2]);
  printf("Byte 4: %02X \n", i.bytes[3]);
  printf("=============================================================\n");

  
}