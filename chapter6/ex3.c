/*
 * chapter 6, exercise 3
 * Write a program that accepts two integer values typed in by the user. Display the
 * result of dividing the first integer by the second, to three-decimal-place accuracy.
 * Remember to have the program check for division by zero.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n1 = get_int("Enter an positiv int number: ");
    int n2 = get_int("Enter an positiv int number: ");
    if (n2 != 0)
    {
        float x = n1 / n2;
        printf("The result is: %.3f\n", x);
    }
    else
    {
        printf("Division by zero.\n");
    }
    return 0;
}
