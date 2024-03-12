/*
 * chapter 9, exercise 6
 * Replace the dateUpdate function from Program 9.4 with the modified one that
 * uses compound literals as presented in the text. Run the program to verify its
 * proper operation.
 */

#include <stdio.h>

// Function to determine the number of days in a month
int numberOfDays(int day, int month, int year)
{
    int daysInMonth;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // February has 29 days in a leap year
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
    {
        daysInMonth = 29;
    }
    else
    {
        daysInMonth = daysPerMonth[month - 1];
    }

    return daysInMonth;
}

// Function to update date using compound literals
void dateUpdate(int *day, int *month, int *year)
{
    int daysInMonth = numberOfDays(*day, *month, *year);

    // Update the date
    *day = (*day != daysInMonth) ? *day + 1 : 1;
    *month = (*day != daysInMonth) ? *month : ((*month != 12) ? *month + 1 : 1);
    *year = (*day != daysInMonth) ? *year : ((*month != 12) ? *year : *year + 1);
}

// Function that calculates the day of the week
// Returns 0 for Sunday, 1 for Monday, and so on
int day_of_week(int year, int month, int day)
{
    int h, q, m, K, J;

    // Adjust the month and year for Zeller's Congruence algorithm
    if (month < 3)
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
    const char *days[] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                          "Thursday", "Friday", "Saturday"};
    const char *day_name = days[day_index];

    // Update the date
    dateUpdate(&day, &month, &year);

    // Calculate the day of the week for the next day
    int day_index_next = day_of_week(year, month, day);

    // Output the result
    printf("The next day is %d-%d-%d\n", day, month, year);

    // Output the result of day of the week for the next day
    printf("The day of the week is: %s.\n", days[day_index_next]);

    return 0;
}
