/**
 * @file Q13-fseekAndftell.c
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
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "r");
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    printf("Size of file: %d", size);
}