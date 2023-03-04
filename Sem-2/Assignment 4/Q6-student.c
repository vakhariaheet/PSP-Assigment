/**
 * @file Q6-student.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to read information of student. It contains Name, Roll
 * number, Birthday, admission date. Calculate age of student at the time of
 * admission.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>

#define CURRENT_YEAR 2023

struct Date {
  int day;
  int month;
  int year;
};

struct Student {
  char name[20];
  int roll_no;
  struct Date birthday;
  struct Date admission_date;
};

int main() {
  struct Student student;
  printf("Enter the student name: ");
  scanf("%s", student.name);
  printf("Enter the student roll number: ");
  scanf("%d", &student.roll_no);
  printf("Enter the student birthday (dd mm yyyy): ");
  scanf("%d %d %d", &student.birthday.day, &student.birthday.month, &student.birthday.year);
  printf("Enter the student admission date (dd mm yyyy): ");
  scanf("%d %d %d", &student.admission_date.day, &student.admission_date.month,
        &student.admission_date.year);
  int age = student.admission_date.year - student.birthday.year;
  printf("=============================================================\n");
  printf("Student Name: %s\n", student.name);
  printf("Student Roll Number: %d\n", student.roll_no);
  printf("Student Age: %d\n", age);
  printf("Student Admission Date: %d/%d/%d\n", student.admission_date.day,
         student.admission_date.month, student.admission_date.year);
  printf("=============================================================\n");

}