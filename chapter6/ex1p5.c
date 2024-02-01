/*
 * chapter 6, exercise 1, program 6.5
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>

int main(void)
{
    int year, rem_4, rem_100, rem_400;
    printf("Enter the year to be tested: ");
    scanf("%i", &year);
    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;
    if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
    {
        printf("It's a leap year.\n");
    }
    else
    {
        printf("Nope, it's not a leap year.\n");
    }
    return 0;
}
