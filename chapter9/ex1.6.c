/*
 * chapter 9, exercise 1, program 9.6
 * Type in and run the seven programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to illustrate arrays of structures
#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct time timeUpdate(struct time now)
{
    // Increment seconds
    now.seconds++;

    // Check if seconds overflow to the next minute
    if (now.seconds == 60)
    {
        now.seconds = 0;
        now.minutes++;

        // Check if minutes overflow to the next hour
        if (now.minutes == 60)
        {
            now.minutes = 0;
            now.hour++;

            // Check if hours overflow to the next day
            if (now.hour == 24)
            {
                now.hour = 0; // Reset to midnight
            }
        }
    }

    return now;
}

int main(void)
{
    struct time testTimes[5] = {{11, 59, 59}, {12, 0, 0}, {1, 29, 59}, {23, 59, 59}, {19, 12, 27}};
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("Time is %.2i:%.2i:%.2i", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
        testTimes[i] = timeUpdate(testTimes[i]);
        printf(" ...one second later it's %.2i:%.2i:%.2i\n", testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }

    return 0;
}
