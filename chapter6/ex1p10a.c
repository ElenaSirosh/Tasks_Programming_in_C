/*
 * chapter 6, exercise 1, program 6.10a
 * Type in and run the 10 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.Try experimenting with each program by keying in values other than those
 * shown.
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p, d;
    bool isPrime;
    for (p = 2; p <= 50; ++p)
    {
        isPrime = true;
        for (d = 2; d < p; ++d)
        {
            if (p % d == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime != false)
        {
            printf("%i ", p);
        }

    }
    printf("\n");
    return 0;
}
