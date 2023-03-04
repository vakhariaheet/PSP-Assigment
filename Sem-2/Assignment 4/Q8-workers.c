/**
 * @file Q8-workers.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to read the details of two workers and calculate total payment of workers using structure.
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

struct Worker {
  char name[20];
  int id;
  int salary;
  int hours;
};

int main(){
    struct Worker worker1, worker2;
    printf("Enter the first worker's name: ");
    scanf("%s", worker1.name);
    printf("Enter the first worker's ID: ");
    scanf("%d", &worker1.id);
    printf("Enter the first worker's salary: ");
    scanf("%d", &worker1.salary);
    printf("Enter the first worker's hours: ");
    scanf("%d", &worker1.hours);
    printf("Enter the second worker's name: ");
    scanf("%s", worker2.name);
    printf("Enter the second worker's ID: ");
    scanf("%d", &worker2.id);
    printf("Enter the second worker's salary: ");
    scanf("%d", &worker2.salary);
    printf("Enter the second worker's hours: ");
    scanf("%d", &worker2.hours);
    printf("=============================================================\n");
    printf("Name: %s \n", worker1.name);
    printf("ID: %d \n", worker1.id);
    printf("Salary: %d \n", worker1.salary);
    printf("Hours: %d \n", worker1.hours);
    printf("Total Payment: %d \n", worker1.salary * worker1.hours);
    printf("=============================================================\n");
    printf("Name: %s \n", worker2.name);
    printf("ID: %d \n", worker2.id);
    printf("Salary: %d \n", worker2.salary);
    printf("Hours: %d \n", worker2.hours);
    printf("Total Payment: %d \n", worker2.salary * worker2.hours);
    printf("=============================================================\n");
}