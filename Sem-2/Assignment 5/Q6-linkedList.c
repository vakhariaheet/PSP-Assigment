/**
 * @file Q6-linkedList.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to create a singly link list and traverse all elements from the link list.
 * @version 0.1
 * @date 2023-03-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *addr;
};

int main(){
    int len = 0;
    printf("Enter Length of the Linked List:");
    scanf("%d", &len);
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *current = head;
    for (int i = 0; i < len; i++) {
        printf("Enter Data for Node %d:", i + 1);
        scanf("%d", &current->data);
        if (i != len - 1) {
            current->addr = malloc(sizeof(struct Node));
            current = current->addr;
        }
    }
    current->addr = NULL;
    current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->addr;
    }
}