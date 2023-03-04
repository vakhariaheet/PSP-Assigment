/**
 * @file Q17-student.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to create student structure having field roll_no,
 * stud_name, class. Pass this entire structure to function and display the
 * structure elements.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

struct Student {
  int roll_no;
  char stud_name[20];
  char class[20];
};

void display(struct Student s);

int main() {
  struct Student s;
  printf("Enter the student roll number: ");
  scanf("%d", &s.roll_no);
  printf("Enter the student name: ");
  scanf("%s", s.stud_name);
  printf("Enter the student class: ");
  scanf("%s", s.class);
  display(s);
}

void display(struct Student s) {
  printf("=============================================================\n");
  printf("Student Roll Number: %d\n", s.roll_no);
  printf("Student Name: %s\n", s.stud_name);
  printf("Student Class: %s\n", s.class);
  printf("=============================================================\n");
}
