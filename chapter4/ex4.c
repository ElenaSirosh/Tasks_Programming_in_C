/*
 * chapter 4, exercise 4
 * Write a program that converts 27° from degrees Fahrenheit (F) to degrees Celsius
 * (C) using the following formula:
 * C = (F - 32) / 1.8
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int F = get_int("Enter an int: ");
    float C = (F - 32) / 1.8;
    printf("%f\n", C);

    return 0;
}
