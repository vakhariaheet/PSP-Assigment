/**
 * @file Q7-bank.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to accept customer details such as: Account_no, Name, Balance using structure. Assume 3 customers in the bank. Write a function to print the account no. and name of each customer whose balance < 100 Rs.
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

struct Customer {
  int account_no;
  char name[20];
  int balance;
};

int main() {
  struct Customer customers[3];
  for (int i = 0; i < 3; i++) {
    printf("Enter Account No:");
    scanf("%d", &customers[i].account_no);
    printf("Enter Name:");
    scanf("%s", customers[i].name);
    printf("Enter Balance:");
    scanf("%d", &customers[i].balance);
  }
  for (int i = 0; i < 3; i++) {
    if (customers[i].balance < 100) {
        printf("=============================================================\n");
        printf("Account No: %d \n", customers[i].account_no);
        printf("Name: %s \n", customers[i].name);
        printf("Balance: %d \n", customers[i].balance);
        printf("=============================================================\n");
    }
  }
}