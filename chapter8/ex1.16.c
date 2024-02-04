/*
 * chapter 8, exercise 1, program 8.16
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    unsigned int j;
    unsigned long int factorial(unsigned int n);
    for (j = 0; j < 11; ++j)
    {
        printf("%2u! = %lu\n", j, factorial(j));
    }
    return 0;
}
// Recursive function to calculate the factorial of a positive integer
unsigned long int factorial(unsigned int n)
{
    unsigned long int result;
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        result = n * factorial(n - 1);
    }
    return result;
}
