/*
 * chapter 8, exercise 1, program 8.4
 * Type in and run the 16 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Function to calculate the nth triangular number
#include <stdio.h>

void calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;
    for (i = 1; i <= n; ++i)
    {
        triangularNumber += i;
    }
    printf("Triangular number %i is %i\n", n, triangularNumber);

}
int main(void)
{
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);
    return 0;
}
