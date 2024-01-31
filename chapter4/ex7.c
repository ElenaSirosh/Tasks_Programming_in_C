/*
 * chapter 4, exercise 7
 * Write a program that evaluates the following expression and displays the results
 * (remember to use exponential format to display the result):
 * (3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)
 */

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int x = 10;
    float y = (3.31 * powf(x, -8) * 2.01 * powf(x, -7)) / (7.16 * powf(x, -6) + 2.01 * powf(x, -8));

    printf("y = (3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8), y = %e\n", y);

    return 0;
}
