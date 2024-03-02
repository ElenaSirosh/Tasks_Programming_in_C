#include <stdio.h>

// Structure to represent date
struct date
{
    int month;
    int day;
    int year;
};

// Structure to represent time
struct time
{
    int hour;
    int minutes;
    int seconds;
};

// Structure to represent date and time
struct dateAndTime
{
    struct date d;
    struct time t;
};

// Function to update time
struct time timeUpdate(struct time now)
{
    now.seconds++;

    // Check for overflow of seconds to minutes
    if (now.seconds == 60)
    {
        now.seconds = 0;
        now.minutes++;

        // Check for overflow of minutes to hours
        if (now.minutes == 60)
        {
            now.minutes = 0;
            now.hour++;

            // Check for overflow of hours to midnight
            if (now.hour == 24)
            {
                now.hour = 0; // Reset to midnight
            }
        }
    }

    return now;
}

// Function to determine number of days in a month
int numberOfDays(struct date d)
{
    int daysInMonth;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // February has 29 days in a leap year
    if (d.month == 2 && (d.year % 4 == 0 || d.year % 100 != 0 || d.year % 400 == 0))
    {
        daysInMonth = 29;
    }
    else
    {
        daysInMonth = daysPerMonth[d.month - 1];
    }

    return daysInMonth;
}

// Function to update date
struct date dateUpdate(struct date today)
{
    // Update the date
    if (today.day != numberOfDays(today))
    {
        today.day = today.day + 1;
    }
    else if (today.month == 12) // End of year
    {
        today.day = 1;
        today.month = 1;
        today.year = today.year + 1;
    }
    else // End of month
    {
        today.day = 1;
        today.month = today.month + 1;
    }
    return today;
}

// Function to update date and time
struct dateAndTime clockKeeper(struct dateAndTime dateTime)
{
    // Call the time update function
    dateTime.t = timeUpdate(dateTime.t);

    // Check if midnight is reached
    if (dateTime.t.hour == 0 && dateTime.t.minutes == 0 && dateTime.t.seconds == 0)
    {
        // Call the date update function
        dateTime.d = dateUpdate(dateTime.d);
    }

    // Return the updated dateAndTime structure
    return dateTime;
}

int main()
{
    // Example usage

    struct dateAndTime dateTime;

    // Prompt for date input
    printf("Enter date (MM DD YYYY): ");
    scanf("%d %d %d", &dateTime.d.month, &dateTime.d.day, &dateTime.d.year);

    // Prompt for time input
    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &dateTime.t.hour, &dateTime.t.minutes, &dateTime.t.seconds);

    // Update hours and date using clockKeeper function
    dateTime = clockKeeper(dateTime);

    // Print the updated date and time
    printf("Updated Date and Time: %d-%d-%d %02d:%02d:%02d\n", dateTime.d.year, dateTime.d.month, dateTime.d.day, dateTime.t.hour,
           dateTime.t.minutes, dateTime.t.seconds);

    return 0;
}
