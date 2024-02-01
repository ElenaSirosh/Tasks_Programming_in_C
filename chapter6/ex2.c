/*
 * chapter 6, exercise 2
 * Write a program that asks the user to type in two integer values at the terminal.
 * Test these two numbers to determine if the first is evenly divisible by the second,
 * and then display an appropriate message at the terminal.
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n1 = get_int("Enter an positiv int number: ");
    int n2 = get_int("Enter an positiv int number: ");
    int x = n1 % n2;
    string y = "out";
    printf("The number is divisible with%s the remainder\n", (x > 0) ? "" : "out");

    return 0;
}
