/**
 * @file Q2-Display.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to copy content of hello.txt to demo.txt
 * @version 0.1
 * @date 2023-01-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
int main() { 
    FILE *file, *file2;
    char c;
    file = fopen("hello.txt", "r");
    file2 = fopen("demo.txt", "w");
    c = fgetc(file);
    while (c != EOF) {
        fputc(c, file2);
        c = fgetc(file);
    }   
    printf("Contents copied to demo.txt");
    fclose(file);
    fclose(file2);
      return 0;
}