/**
 * @file Q5-equation.c  
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a menu driven program for the equation A=(B+C)*(B-C)/ (B*C) using pointers.
 * @version 0.1
 * @date 2023-03-02
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter B, C: ");
    scanf("%d %d", &b, &c);
    int *ptrA = &a, *ptrB = &b, *ptrC = &c;
    *ptrA = (*ptrB + *ptrC) * (*ptrB - *ptrC) / (*ptrB * *ptrC);
    printf("A = %d", a);
    return 0;
}