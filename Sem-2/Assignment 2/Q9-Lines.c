/**
 * @file Q9-Lines.c         
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-01-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
int main(){
    int count = 1;
    char fileName[20];
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "r");
    char c;
    c = fgetc(file);
    while (c != EOF) {
        if (c == '\n') count++;
        c = fgetc(file);
    }
    printf("Number of lines: %d", count);
}