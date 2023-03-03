/**
 * @file Q3-sum.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to find sum of two numbers.
 * @version 0.1
 * @date 2023-03-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("Sum of %d and %d is %d", num1, num2, num1 + num2);
    return 0;
}