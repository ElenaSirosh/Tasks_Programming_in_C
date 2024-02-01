/*
 * chapter 7, exercise 1, program 7.4
 * Type in and run the eight programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>
#include <stdbool.h>

// Modified program to generate prime numbers

int main(void)
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;
    primes[0] = 2;
    primes[1] = 3;
    for (p = 5; p <= 50; p = p + 2)
    {
        isPrime = true;
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
        {
            if (p % primes[i] == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }
    for (i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }
    printf("\n");
    return 0;
}
