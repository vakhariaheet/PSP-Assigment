/**
 * @file Q15-FreadWrite.c
 * @author your name (you@domain.com)
 * @brief WAP to demonstrate the use of fread() and fwrite() functions.
 * @version 0.1
 * @date 2023-01-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
int main(){
    char fileName[20];
    char data[100];
    char readData[100];
    printf("Enter file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "w+");
    char c;
    printf("Enter characters: ");
    scanf("%c", &c);
    scanf("%[^\n]", data);
    fwrite(data, strlen(data)+1, 1, file);
    
    fseek(file, 0, SEEK_SET);

    fread(readData, strlen(data)+1, 1, file);
    printf("Data read: %s", readData);
    fclose(file);
}