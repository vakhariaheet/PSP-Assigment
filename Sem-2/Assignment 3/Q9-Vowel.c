/**
 * @file Q9-Vowel.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief WAP to check whether the given character is vowel or not and also digit using pointers.
 * @version 0.1
 * @date 2023-03-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <ctype.h>
int isVowel(char *ch) {
    char newCh = tolower(*ch);
    return newCh == 'a' || newCh == 'e' || newCh == 'i' || newCh == 'o' || newCh == 'u';
}
int isDigit(char *ch) {
    return isdigit(*ch);
}
int main() {
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);
    char *ptrCh = &ch;
    if (isVowel(ptrCh)) {
        printf("Character is Vowel");
    } else if (isDigit(ptrCh)) {
        printf("Character is Digit");
    } else {
        printf("Character is Consonant");
    }
    return 0;
}