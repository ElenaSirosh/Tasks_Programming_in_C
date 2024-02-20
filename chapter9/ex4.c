/*
 * chapter 9, exercise 4
 * If you take the value of N as computed in exercise 2, subtract 621,049 from it, and
 * then take that result modulo 7, you get a number from 0 to 6 that represents the
 * day of the week (Sunday through Saturday, respectively) on which the particular
 * day falls. For example, the value of N computed for August 8, 2004, is 732,239 as
 * derived previously. 732,239 – 621,049 gives 111,190, and 111,190 % 7 gives 2,
 * indicating that this date falls on a Tuesday.
 * Use the functions developed in the previous exercise to develop a program that
 * displays the day of the week on which a particular date falls. Make certain that the
 * program displays the day of the week in English (such as “Monday”).
 */

#include <stdio.h>

// Function that calculates the day of the week
// Returns 0 for Sunday, 1 for Monday, and so on
int day_of_week(int year, int month, int day)
{
    int h, q, m, K, J;

    // Adjust the month and year for Zeller's Congruence algorithm
    if (month <= 2)
    {
        month += 12;
        year--;
    }

    q = day;
    m = month;
    K = year % 100;
    J = year / 100;

    // Zeller's Congruence algorithm
    h = (q + 13 * (m + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

    // Convert the result to the format 0 (Sunday) - 6 (Saturday)
    return (h + 6) % 7;
}

int main()
{
    int day, month, year;

    // Input the date from the keyboard
    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Calculate the day of the week
    int day_index = day_of_week(year, month, day);

    // Define the names of the days of the week
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    const char *day_name = days[day_index];

    // Output the result
    printf("The date %d-%d-%d falls on %s.\n", day, month, year, day_name);

    return 0;
}
