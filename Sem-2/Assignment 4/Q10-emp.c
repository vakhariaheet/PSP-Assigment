/**
 * @file Q10-emp.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to accept details of 'n' employee(eno, ename, salary)
 * and display the details of employee having highest salary. Use array of
 * structure.
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
  int salary;
};
struct Employee max(struct Employee emp[], int n);
int main() {
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);
  struct Employee emp[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the employee ID: ");
    scanf("%d", &emp[i].id);
    printf("Enter the employee name: ");
    scanf("%s", emp[i].name);
    printf("Enter the employee salary: ");
    scanf("%d", &emp[i].salary);
  }
  struct Employee maxEmp = max(emp, n);
  printf("=============================================================\n");
  printf("Employee ID: %d \n", maxEmp.id);
  printf("Employee Name: %s \n", maxEmp.name);
  printf("Employee Salary: %d \n", maxEmp.salary);
  printf("=============================================================\n");
}

struct Employee max(struct Employee emp[], int n) {
  struct Employee max = emp[0];
  for (int i = 0; i < n; i++) {
    if (emp[i].salary > max.salary) {
      max = emp[i];
    }
  }
  return max;
}