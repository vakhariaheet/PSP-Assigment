/**
 * @file Q5-days.c          
 * @author Heet Vakharia(query@heetvakharia.in)
 * @brief Write a program to create a structure named Date having day, month and year as its elements. Store the current date in the structure. Now add 45 days to the current date and display the final date.
 * @version 0.1
 * @date 2023-02-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Date addDays(struct Date date, int days) {
    date.day += days;
    while (date.day > 30) {
        date.day -= 30;
        date.month++;
    }
    while (date.month > 12) {
        date.month -= 12;
        date.year++;
    }
    return date;
}
int main() {
    struct Date date;
    printf("Enter Current Date: ");
    scanf("%d/%d/%d", &date.day, &date.month, &date.year);
    date = addDays(date, 45);
    printf("Date: %d/%d/%d", date.day, date.month, date.year);
    return 0;
}