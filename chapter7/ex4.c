/*
 * chapter 7, exercise 4
 * Write a program that calculates the average of an array of 10 floating-point values.
 */

#include <stdio.h>
#include <cs50.h>

//average amount of money in the wallet per 10 days
int main(void)
{
    float money[10];
    int n;
    float average;
    float sum = 0;

    for (n = 0; n < 10; ++n)
    {
        money[n] = 0;

        for (n = 0; n < 10; ++n)
        {
            money[n] = get_float("enter how money: ");
            sum += money[n];
        }
    }
    average = sum / 10;
    printf("%f\n", average);

    return 0;
}
