/*
 * chapter 8, exercise 2
 * Modify Program 8.4 so the value of triangularNumber is returned by the function.
Then go back to Program 5.5 and change that program so that it calls the
new version of the calculateTriangularNumber function.
 */

// Function to calculate the nth triangular number
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
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);
    return 0;
}
