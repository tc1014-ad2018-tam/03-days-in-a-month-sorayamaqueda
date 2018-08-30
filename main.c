/*Objective: Tell the user how many days the month has, and whether it is a leap year or not.
 *
 * Method: Create two variables: One for the day and the other one for the year (both integers).
 *
 * Notes: We have to take into account the leap years.
 * Even number months have 30 days.
 * Prime number months have 31 days.
 *
 * How to know when it is leap year:
 * if the year is not divisible by 4 then it isn't a leap year.
 * if the year is not divisible by 100 then it is a leap year.
 * if the year is not divisible by 400 then it isn't a leap year.
 *
 * Algorithm for a leap year:
 * First take the integer variable year.
 * Second Assign value to the variable.
 * Third Check if the year can be divided by 4 but not by 100. (not a leap year)
 * Fourth Check if the year can be divided by 400. (leap year)
 * Fifth Elsewise NOT A LEAP YEAR.
 *
 * Author: Soraya Maqueda
 * Date: 28.08.2018
 */
#include <stdio.h>

int main() {
    int m; //Month. Variable for the month.
    int y; //Year. Variable for the year.

    printf ("Tell me what month is it:");
    scanf ("%i", &m); //This saves the value introduced by the user to the variable of d.
    printf ("Tell me what year is it:");
    scanf ("%i", &y); //This saves the value introduced by the user to the variable of m.

    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf ("This month has 31 days.");
            break;
        case 2:
            if (y%4 == 0) {
                if (y%100 != 0) {
                    printf ("This month has 29 days on this year.");
                } else {
                    if (y%400 == 0) {
                    printf ("This month has 29 days on this year.");
                    } else {
                        printf ("This month has 28 days on this year.");
                    }
            }
                break;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            printf("This month has 30 days.");
        }
    return 0;
    }
}