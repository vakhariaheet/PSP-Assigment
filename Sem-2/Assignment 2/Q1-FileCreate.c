/**
 * @file Q1-FileCreate.c
 * @author Heet Vakharia (query@heetvakharia.in)
 * @brief WAP which will prompt the user for file name and create it ,open it in write mode and close it as well.
 * @version 0.1
 * @date 2023-01-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {
    // File Pointer
    FILE *file;
    // Taking FilName From The User
    char fileName[100];
    printf("Enter The File Name: ");
    scanf("%s", fileName);
    // Creating File
    file = fopen(fileName, "w");
    printf("File Created Succesfully");
    fclose(file);
}