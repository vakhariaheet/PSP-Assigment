/**
 * @file Q13-friends.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program which will read and calculate item prices used in
 * party and divide the expenses amount in friends equally using structure.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

struct Item {
  char name[20];
  float price;
};

int main() {
  struct Item items[5];
  int total_items = 0, friends = 0;
  float total_price = 0;
  printf("Enter Total Items:  ");
  scanf("%d", &total_items);
  printf("Enter Total Friends:  ");
  scanf("%d", &friends);
  for (int i = 0; i < total_items; i++) {
    printf("Enter Item Name:");
    scanf("%s", items[i].name);
    printf("Enter Item Price:");
    scanf("%f", &items[i].price);
    total_price += items[i].price;
  }
  printf("=============================================================\n");
  printf("Total Items: %d \n", total_items);
  printf("Total Price: %.2f \n", total_price);
  printf("Total Price Per Person: %.2f \n", total_price / friends);
  printf("=============================================================\n");
}