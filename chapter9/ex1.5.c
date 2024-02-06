/*
 * chapter 8, exercise 1, program 8.5
 * Type in and run the seven programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to update the time by one second
#include <stdio.h>
struct time
{
    int hour;
    int minutes;
    int seconds;
};
int main(void)
{
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;
    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);
    nextTime = timeUpdate(currentTime);
    printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);
    return 0;
}
// Function to update the time by one second
struct time timeUpdate(struct time now)
{
    ++now.seconds;
    if (now.seconds == 60)
    { // next minute
        now.seconds = 0;
        ++now.minutes;
        if (now.minutes == 60)
        { // next hour
            now.minutes = 0;
            ++now.hour;
            if (now.hour == 24)
                // midnight
                now.hour = 0;
        }
    }
    return now;
}
