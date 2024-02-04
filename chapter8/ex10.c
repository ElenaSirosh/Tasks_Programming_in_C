/*
 * chapter 8, exercise 10
 * Write a function prime that returns 1 if its argument is a prime number and
 * returns 0 otherwise.
 */

// Program to generate a table of prime numbers
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int Prime(int n);

int main(int argv, char *argc[])
{
    int n = atoi(argc[1]);
    n = Prime(n);

    return 0;
}

int Prime(int n)
{
    int i, j;
    _Bool isPrime;
    for (i = 2; i <= n; ++i)
    {
        isPrime = 1;
        for (j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = 0;
            }
        }
        if (isPrime != 0)
        {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}
