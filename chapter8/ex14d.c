/*
 * chapter 8, exercise 14 program 4
 * Rewrite the functions developed in the last four exercises to use global variables
 * instead of arguments. For example, the preceding exercise should now sort a globally
 * defined array.
 */

// Program to generate a table of prime numbers
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int Prime();
int n;

int main(int argv, char *argc[])
{
    n = atoi(argc[1]);
    n = Prime(n);

    return 0;
}

int Prime()
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
