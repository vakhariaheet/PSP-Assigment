/**
 * @file Q15-studentUnion.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a Program to create union of student having fields roll_no, stud_name, mark1, mark2, mark3. Calculate total marks and average marks. Arrange the records in descending order of marks.
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
//! THIS CODE IS NOT WORKING PROPERLY. AS UNION CAN ONLY STORE ONE VALUE AT A TIME, IT IS NOT POSSIBLE TO STORE ALL THE VALUES OF THE STRUCTURE IN THE UNION. SO, THE CODE IS NOT WORKING PROPERLY.
#include <stdio.h>

union Student {
  int roll_no;
  char stud_name[20];
  int mark1;
  int mark2;
  int mark3;
};

int main() {
  union Student s[1];
  int total_marks = 0;
  float avg_marks = 0;
  for (int i = 0; i < 1; i++) {
    printf("Enter Roll Number: ");
    scanf("%d", &s[i].roll_no);
    printf("Enter Student Name: ");
    scanf("%s", s[i].stud_name);
    printf("Enter Mark 1: ");
    scanf("%d", &s[i].mark1);
    printf("Enter Mark 2: ");
    scanf("%d", &s[i].mark2);
    printf("Enter Mark 3: ");
    scanf("%d", &s[i].mark3);
    total_marks += s[i].mark1 + s[i].mark2 + s[i].mark3;
  }
  avg_marks = total_marks / 30;
  printf("=============================================================\n");
  printf("Total Marks: %d \n", total_marks);
  printf("Average Marks: %f \n", avg_marks);
  printf("=============================================================\n");
}