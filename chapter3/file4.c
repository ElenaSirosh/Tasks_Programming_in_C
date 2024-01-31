/*
 * chapter 3, exercise 4
 * Write a program that subtracts the value 15 from 87 and displays the result,
 * together with an appropriate message, at the terminal.
 */

#include <stdio.h>
int main(void)
{
    int a, b, x;

    a = 87;
    b = 15;
    x = a - b;
    printf("The x for %i and %i is %i\n", a, b, x);

    return 0;
}
