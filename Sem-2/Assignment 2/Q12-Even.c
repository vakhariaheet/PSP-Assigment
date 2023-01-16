/**
 * @file Q12-Even.c
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
    file = fopen(fileName, "w");
    for(int i=0; i<100; i++){
        if(i%2==0) fprintf(file, "%d ", i);
    }
}