/*
 * chapter 8, exercise 1, program 8.9
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Function to find the minimum value in an array
#include <stdio.h>

int minimum(int values[10])
{
    int minValue, i;
    minValue = values[0];
    for (i = 1; i < 10; ++i)
    {
        if (values[i] < minValue)
        {
            minValue = values[i];
        }
    }
    return minValue;

}
int main(void)
{
    int scores[10], i, minScore;
    int minimum(int values[10]);
    printf("Enter 10 scores\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%i", &scores[i]);
        minScore = minimum(scores);
    }
    printf("\nMinimum score is %i\n", minScore);
    return 0;
}
