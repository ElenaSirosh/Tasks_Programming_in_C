/*
 * chapter 5, exercise 9, program 5.5
 * Rewrite Programs 5.2 through 5.5, replacing all uses of the for statement by
 * equivalent while statements. Run each program to verify that both versions are
 * identical.
 */

#include <stdio.h>

int main(void)
{
    int counter = 1;
    while (counter <= 5)
    {
        ++counter;
        int number;
        printf("What triangular number do you want? ");
        scanf("%i", &number);
        int n = 1;
        int triangularNumber = 0;
        while (n <= number)
        {
            triangularNumber += n;
            n++;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return 0;
}
