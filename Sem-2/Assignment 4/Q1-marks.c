/**
 * @file Q1-marks.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to enter the marks of 5 students in Chemistry,
 * Mathematics and Physics (each out of 100) using a structure named Marks
 * having elements roll no., name, chem_marks, maths_marks and phy_marks and
 * then display the percentage of each student.
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

#define TOTAL_MARKS 300;

struct Student {
   int rollNo;
   char name[20];
   int chem_marks;
   int physics_marks;
   int math_marks;
};

int main() { 
    struct Student students[5];
    for (int i = 0; i < 5;i++){
      printf("Enter Roll No:");
      scanf("%d", &students[i].rollNo);
      printf("Enter Name:");
      scanf("%s", students[i].name);
      printf("Enter Maths Marks:");
      scanf("%d",&students[i].math_marks);
      printf("Enter Physic Marks:");
      scanf("%d",&students[i].physics_marks);
      printf("Enter Chem Marks:");
      scanf("%d",&students[i].chem_marks);
    }
    for (int i = 0; i < 5;i++){
      int per = (students[i].chem_marks + students[i].math_marks +
                students[i].physics_marks) / 3;
      printf("%s scored %d ", students[i].name, per);
    }
}