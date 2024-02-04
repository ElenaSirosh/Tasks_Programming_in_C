/*
 * chapter 8, exercise 2a
 * Modify Program 8.4 so the value of triangularNumber is returned by the function.
Then go back to Program 5.5 and change that program so that it calls the
new version of the calculateTriangularNumber function.
 */

#include <stdio.h>

int calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;
    for (i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }
    printf("Triangular number %i is %i\n", n, triangularNumber);
    return triangularNumber;
}

int main(void)
{
    int n, number, triangularNumber = 0, counter;
    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        calculateTriangularNumber(number);
    }
    return 0;
}
