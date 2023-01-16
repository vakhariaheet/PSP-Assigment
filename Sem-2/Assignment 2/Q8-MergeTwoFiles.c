/**
 * @file Q8-MergeTwoFiles.c
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
    char fileName[20];
    char fileName2[20];
    char fileName3[20];
    printf("Enter file name: ");
    scanf("%s", fileName);
    printf("Enter 2nd file name: ");
    scanf("%s", fileName2);
    printf("Enter file name to copy to: ");
    scanf("%s", fileName3);
    FILE *file;
    FILE *file2;
    FILE *file3;
    file = fopen(fileName, "r");
    file2 = fopen(fileName2, "r");
    file3 = fopen(fileName3, "w");
    char c;
    c = fgetc(file);
    while (c != EOF) {
        fputc(c, file3);
        c = fgetc(file);
    }
    c = fgetc(file2);
    while (c != EOF) {
        fputc(c, file3);
        c = fgetc(file2);
    }
    printf("Contents copied to %s", fileName3);

}