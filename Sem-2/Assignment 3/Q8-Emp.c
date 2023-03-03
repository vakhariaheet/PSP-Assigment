/**
 * @file Q8-Emp.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to take employee’s personal information as employeeid(int), gender(char: M or F), salary(float). Display it using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main(){
    int empId;
    float salary;
    char gender;
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Salary: ");
    scanf("%f", &salary);
    printf("Enter Employee Gender (M/F): ");
    scanf(" %c", &gender);
    int *ptrEmpId = &empId;
    float *ptrSalary = &salary;
    char *ptrGender = &gender;
    printf("Employee ID: %d\n", *ptrEmpId);
    printf("Employee Salary: %f\n", *ptrSalary);
    printf("Employee Gender (M/F): %c\n", *ptrGender);
    
}