/**
 * @file Q4-Emp.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to accept the details of employee and display them
 * using structure. Details consist of Employee ID, Name, Designation,
 * Department, Salary.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

struct Employee {
  int id;
  char name[20];
  char designation[20];
  char department[20];
  int salary;
};
int main() {
  struct Employee emp;

  printf("Enter the employee ID: ");
  scanf("%d", &emp.id);
  printf("Enter the employee name: ");
  scanf("%s", emp.name);
  printf("Enter the employee designation: ");
  scanf("%s", emp.designation);
  printf("Enter the employee department: ");
  scanf("%s", emp.department);
  printf("Enter the employee salary: ");
  scanf("%d", &emp.salary);
  printf("=============================================================\n");
  printf("Employee ID: %d \n", emp.id);
  printf("Employee Name: %s \n", emp.name);
  printf("Employee Designation: %s \n", emp.designation);
  printf("Employee Department: %s \n", emp.department);
  printf("Employee Salary: %d \n", emp.salary);
  printf("=============================================================\n");
}