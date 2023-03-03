/**
 * @file Q1-smallest.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to Find Smallest Element Using Pointers
 * @version 0.1
 * @date 2023-02-27
 * @copyright Copyright (c) 2023
 */
#include <stdio.h>

int smallest(int *num1, int *num2) { return *num1 > *num2 ? *num1 : *num2; };
int main() { 
    int num1, num2;
    printf("Enter a number");
    scanf("%d", &num1);
    printf("Enter a second number");
    scanf("%d", &num2);
    printf("Smallest number among both of these is %d", smallest(&num1, &num2));
}