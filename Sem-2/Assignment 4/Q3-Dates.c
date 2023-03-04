/**
 * @file Q3-Dates.c
 * @author  Heet Vakharia (query@heetvakharia.in)
 * @brief Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
 * @version 0.1
 * @date 2023-03-04
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

int main(){
    struct Date date1, date2;
    printf("Enter the first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter the second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year){
        printf("Dates are equal");
    } else {
        printf("Dates are not equal");
    }
}