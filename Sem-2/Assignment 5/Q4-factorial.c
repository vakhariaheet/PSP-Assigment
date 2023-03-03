/**
 * @file Q4-factorial.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to find factorial of a number.
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; i++) {
    fact = fact * i;
  }
  return fact;
}
int main(int argc,char* argv[]){
    int num = atoi(argv[1]);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}