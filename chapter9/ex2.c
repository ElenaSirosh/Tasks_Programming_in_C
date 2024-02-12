/*
 * chapter 9, exercise 2
 * In certain applications, particularly in the financial area, it is often necessary to calculate
 * the number of elapsed days between two dates. For example, the number of days between July 2, 2005,
 * and July 16, 2005, is obviously 14. But how many days are there between August 8, 2004, and February 22, 2005?
 * This calculation requires a bit more thought.
 * Luckily, a formula can be used to calculate the number of days between two dates.
 * This is affected by computing the value of N for each of the two dates and then
 * taking the difference, where N is calculated as follows:
 * N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
 * where
 * f(year, month) = year - 1 if month <= 2
 * year otherwise
 * g(month) = month + 13 if month <= 2
 * month + 1 otherwise
 * As an example of applying the formula, to calculate the number of days between
 * August 8, 2004, and February 22, 2005, you can calculate the values of N1 and N2
 * by substituting the appropriate values into the preceding formula as shown:
 * N1       =1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 3
 *          = (1461 x 2004) / 4 + (153 x 9) / 5 + 3
 *          = 2,927,844 / 4 + 1,377 / 5 + 3
 *          = 731,961 + 275 + 3
 *          = 732,239
 * N2       = 1461 x f(2005, 2) / 4 + 153 x g(2) / 5 + 21
 *          = (1461 x 2004) / 4 + (153 x 15) / 5 + 21
 *          = 2,927,844 / 4 + 2295 / 5 + 21
 *          = 731,961 + 459 + 21
 *          = 732,441
 * Number of elapsed days   = N2 - N1
 *                          = 732,441 – 732,239
 *                          = 202
 * So the number of days between the two dates is shown to be 202.The preceding
 * formula is applicable for any dates after March 1, 1900 (1 must be added to N for
 * dates from March 1, 1800, to February 28, 1900, and 2 must be added for dates
 * between March 1, 1700, and February 28, 1800).
 * Write a program that permits the user to type in two dates and then calculates the
 * number of elapsed days between the two dates.Try to structure the program logically
 * into separate functions. For example, you should have a function that accepts
 * as an argument a date structure and returns the value of N computed as shown
 * previously.This function can then be called twice, once for each date, and the
 * differencetaken to determine the number of elapsed days.
 */

#include <stdbool.h>
#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

// Function declarations
int calculateN(struct date d);
int numberOfElapsedDays(struct date date1, struct date date2);

int main(void)
{
    struct date date1, date2;
    int elapsedDays;

    // Input date 1
    printf("Enter the first date (mm dd yyyy): ");
    scanf("%d %d %d", &date1.month, &date1.day, &date1.year);

    // Input date 2
    printf("Enter the second date (mm dd yyyy): ");
    scanf("%d %d %d", &date2.month, &date2.day, &date2.year);

    // Calculate elapsed days
    elapsedDays = numberOfElapsedDays(date1, date2);

    // Display result
    printf("Number of elapsed days between the two dates: %d\n", elapsedDays);

    return 0;
}

// Function to calculate N value for a given date
int calculateN(struct date d)
{
    int f, g;

    if (d.month <= 2)
    {
        f = d.year - 1;
        g = d.month + 13;
    }
    else
    {
        f = d.year;
        g = d.month + 1;
    }

    return 1461 * f / 4 + 153 * g / 5 + d.day;
}

// Function to calculate number of elapsed days between two dates
int numberOfElapsedDays(struct date date1, struct date date2)
{
    int n1 = calculateN(date1);
    int n2 = calculateN(date2);

    return n2 - n1;
}
