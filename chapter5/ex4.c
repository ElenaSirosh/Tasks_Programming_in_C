/*
 * chapter 5, exercise 4
 * The factorial of an integer n, written n!, is the product of the consecutive integers
 * 1 through n. For example, 5 factorial is calculated as
 * 5! = 5 x 4 x 3 x 2 x 1 = 120
 * Write a program to generate and print a table of the first 10 factorials.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter an int: ");
    int fact = 1;
    for (int i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }
    printf("Factorial of %i is %i\n", n, fact);
    return 0;
}
