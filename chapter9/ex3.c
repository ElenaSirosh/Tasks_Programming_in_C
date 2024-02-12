/*
 * chapter 9, exercise 3
 * Write a function elapsed_time that takes as its arguments two time structures
 * and returns a time structure that represents the elapsed time (in hours, minutes,
 * and seconds) between the two times. So the call elapsed_time (time1, time2)
 * where time1 represents 3:45:15 and time2 represents 9:44:03, should return a
 * time structure that represents 5 hours, 58 minutes, and 48 seconds. Be careful with
 * times that cross midnight.
 */

#include <stdio.h>

// Define a simple Time structure
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate elapsed time
struct Time elapsed_time(struct Time time1, struct Time time2)
{
    // Convert time1 and time2 to seconds
    int total_seconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int total_seconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;

    // Calculate the difference in seconds
    int time_diff_seconds = total_seconds2 - total_seconds1;

    // Handle cases where time2 crosses midnight
    if (time_diff_seconds < 0)
    {
        time_diff_seconds += 24 * 3600; // Add a day in seconds
    }

    // Calculate hours, minutes, and seconds from the difference
    int hours = time_diff_seconds / 3600;
    int remaining_seconds = time_diff_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    // Create and return a Time structure representing the elapsed time
    struct Time elapsed;
    elapsed.hours = hours;
    elapsed.minutes = minutes;
    elapsed.seconds = seconds;
    return elapsed;
}

int main()
{
    struct Time time1, time2;

    printf("Enter time 1 (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter time 2 (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    struct Time elapsed = elapsed_time(time1, time2);
    printf("Elapsed time: %d hours, %d minutes, %d seconds\n", elapsed.hours, elapsed.minutes, elapsed.seconds);

    return 0;
}
