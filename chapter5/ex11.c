/*
 * chapter 5, exercise 11
 * Write a program that calculates the sum of the digits of an integer. For example,
 * the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.The program
 * should accept any arbitrary integer typed in by the user.
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int num = get_int("Enter your number  ");
    int exp, sum = 0;
    exp = log10(num);
    printf("log10(%i) = %i\n", num, exp);
    for (int i = exp; i >= 0; --i)
    {
        float s = powf(10, i);
        int y = (int)(num / s);
        int x = y % 10;
        printf("%i ", x);
        sum += x;
    }
    printf("= %i\n", sum);

    return 0;
}
