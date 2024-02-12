/*
 * chapter 9, exercise 1, program 9.1
 * Type in and run the seven programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to illustrate a structure
#include <stdio.h>

int main(void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct date today;
    today.month = 9;
    today.day = 25;
    today.year = 2004;
    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}
