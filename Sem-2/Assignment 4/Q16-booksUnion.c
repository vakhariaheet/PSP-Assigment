/**
 * @file Q16-booksUnion.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief  Write a program to accept book details for 'n' books as book_title,
 * author, publisher and cost. Assign the accession number to each book in
 * increasing order using Union. Display these details as,
 *      1. Books of a specific author
 *      2. Books by a specific Publisher
 *      3. All Books costing Rs. 500 and above.
 *      4. All Books.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
struct Book {
  char title[20];
  char author[20];
  char publisher[20];
  int cost;
};

union Accession {
  int num;
  struct Book book;
};
void bookInput(union Accession books[], int n);
void printBooks(union Accession books[], int n);
void printBook(unsigned int i, union Accession books[]);
void printBooksByAuthor(union Accession books[], int n);
void printBooksByPublisher(union Accession books[], int n);
void printBooksByCost(union Accession books[], int n);
void printMenu();

int main() {
  int n;
  printf("Enter the number of books: ");
  scanf("%d", &n);
  union Accession books[n];
  for (int i = 0; i < n; i++) {
    bookInput(books, i);
    books[i].num = i + 1;
  }
  printMenu();
  int choice;
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
      printBooksByAuthor(books, n);
      break;
    case 2:
      printBooksByPublisher(books, n);
      break;
    case 3:
      printBooksByCost(books, n);
      break;
    case 4:
      printBooks(books, n);
      break;
    default:
      printf("Invalid choice!");
      break;
  }
}

void printBooks(union Accession books[], int n) {
  for (int i = 0; i < n; i++) {
    printBook(i, books);
  }
}

void printBook(unsigned int i, union Accession books[]) {
  printf("=============================================================\n");
  printf("Accession Number: %d \n", books[i].num);
  printf("Book Title: %s \n", books[i].book.title);
  printf("Book Author: %s \n", books[i].book.author);
  printf("Book Publisher: %s \n", books[i].book.publisher);
  printf("Book Cost: %d \n", books[i].book.cost);
  printf("=============================================================\n");
}

void printMenu() {
  printf("=============================================================\n");
  printf("1. Books of a specific author\n");
  printf("2. Books by a specific Publisher\n");
  printf("3. All Books costing Rs. 500 and above.\n");
  printf("4. All Books.\n");
  printf("5. Exit\n");
  printf("=============================================================\n");
};

void printBooksByAuthor(union Accession books[], int n) {
  char author[20];
  printf("Enter the author name: ");
  scanf("%s", author);
  for (int i = 0; i < n; i++) {
    if (strcmp(books[i].book.author, author) == 0) {
      printBook(i, books);
    }
  }
}

void printBooksByPublisher(union Accession books[], int n) {
  char publisher[20];
  printf("Enter the publisher name: ");
  scanf("%s", publisher);
  for (int i = 0; i < n; i++) {
    if (strcmp(books[i].book.publisher, publisher) == 0) {
      printBook(i, books);
    }
  }
}

void printBooksByCost(union Accession books[], int n) {
  for (int i = 0; i < n; i++) {
    if (books[i].book.cost >= 500) {
      printBook(i, books);
    }
  }
}
void bookInput(union Accession books[], int i) {
  printf("=============================================================\n");

  printf("Enter the book title: ");
  scanf("%s", books[i].book.title);
  printf("Enter the book author: ");
  scanf("%s", books[i].book.author);
  printf("Enter the book publisher: ");
  scanf("%s", books[i].book.publisher);
  printf("Enter the book cost: ");
  scanf("%d", &books[i].book.cost);

  printf("=============================================================\n");
}