/*
 * chapter 8, exercise 7
 * Write a function that raises an integer to a positive integer power. Call the function
 * x_to_the_n taking two integer arguments x and n. Have the function return
 * a long int, which represents the results of calculating xn.
 */

// exponentiation
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

long power(int x, int n);

int main(int argv, char *argc[])
{
    int x = atoi(argc[1]);
    int n = atoi(argc[2]);
    long xn = power(x, n);
    printf("Number %i to the power of %i = %li\n", x, n, xn);
}

long power(int x, int n)
{
    long xn = x;
    for (int i = 1; i < n; ++i)
    {
        xn = xn * x;
    }
    return xn;
}
