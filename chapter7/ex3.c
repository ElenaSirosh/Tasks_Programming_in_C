/*
 * chapter 7, exercise 3
 * Program 7.2 permits only 20 responses to be entered. Modify that program so that
 * any number of responses can be entered. So that the user does not have to count
 * the number of responses in the list, set up the program so that the value 999 can
 * be keyed in by the user to indicate that the last response has been entered. (Hint:
 * You can use the break statement here if you want to exit your loop.)
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int ratingCounters[11], i, response;

    // array initialization
    for (i = 1; i <= 10; ++i)
    {
        ratingCounters[i] = 0;
    }

    // Rating Counters
    do
    {
        printf("Enter your responses\n");
        scanf("%i", &response);
        //the response number is either less than 1 or greater than 10
        if (response < 1 || response > 10)
        {
            if (response == 999)
            {
                break;
            }
            else
            {
                printf("Bad response: %i\n", response);
            }
        }
        else
        {
            ++ratingCounters[response];
        }
    }
    while (response != 999);

    printf("\n\nRating Number of Responses\n");
    printf("------ -------------------\n");
    for (i = 1; i <= 10; ++i)
    {
        printf("%4i%14i\n", i, ratingCounters[i]);
    }
    return 0;
}
