/**
 * @file Q14-menu.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a menu driven program which shows the working of library. The
 * menu option should be i) Add book details. ii) Display book details. iii)
 * List all books of given author. iv) List the count of books in the library.
 *  v) Exit.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
struct Book {
  char name[200];
  char author[200];
  int pages;
  float price;
};
void printMenu();
void addBook(struct Book books[], int n);
void displayBook(struct Book books[], int n);
void listBooksOfAuthor(struct Book books[], int n);
void listCountOfBooks(struct Book books[], int n);
void stringInput(char *str);
void printBook(struct Book book);
void escape();

int main() {
  struct Book books[10];
  int n = 0;
  int choice;
  int isExit = 0;
  do {
    printMenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);
    escape();
    switch (choice) {
      case 1:
        addBook(books, n);
        n++;
        continue;
      case 2:
        displayBook(books, n);
        continue;
      case 3:
        listBooksOfAuthor(books, n);
        continue;
      case 4:
        listCountOfBooks(books, n);
        continue;
      case 5:
        isExit = 1;
        continue;
      default:
        printf("Invalid Choice");
        continue;
    }
  } while (isExit == 0);
}

void printMenu() {
  printf("=============================================================\n");
  printf("1. Add Book Details \n");
  printf("2. Display Book Details \n");
  printf("3. List all books of given author \n");
  printf("4. List the count of books in the library \n");
  printf("5. Exit \n");
  printf("=============================================================\n");
}
void addBook(struct Book books[], int n) {
  printf("Enter Book Name: ");
  stringInput(books[n].name);

  printf("Enter Author Name: ");
  stringInput(books[n].author);

  printf("Enter Number of Pages: ");
  scanf("%d", &books[n].pages);
  printf("Enter Price: ");
  scanf("%f", &books[n].price);
}
void displayBook(struct Book books[], int n) {
  for (int i = 0; i < n; i++) {
    printBook(books[i]);
  }
}
void listBooksOfAuthor(struct Book books[], int n) {
  char author[20];
  printf("Enter Author Name: ");
  stringInput(author);
  printf("=============================================================\n");
  for (int i = 0; i < n; i++) {
    if (strcmp(books[i].author, author) == 0) {
        printBook(books[i]);
    }
  }
}
void listCountOfBooks(struct Book books[], int n) { 
    printf("=============================================================\n");
    printf("Total Books: %d \n", n);
    printf("=============================================================\n");
 }
void escape() {
  char c;
  scanf("%c", &c);
}
void stringInput(char *str) {
  char c;
  int i = 0;
  while ((c = getchar()) != '\n') {
    str[i] = c;
    i++;
  }
  str[i] = '\0';
};
void printBook(struct Book book) {
  printf("=============================================================\n");
  printf("Book Name: %s \n", book.name);
  printf("Author Name: %s \n", book.author);
  printf("Number of Pages: %d \n", book.pages);
  printf("Price: %.2f \n", book.price);
  printf("=============================================================\n");
}