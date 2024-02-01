/*
 * chapter 6, exercise 6
 * Write a program that takes an integer keyed in from the terminal and extracts and
 * displays each digit of the integer in English. So, if the user types in 932, the program
 * should display
 * nine three two
 * Remember to display “zero” if the user types in just a 0. (Note: This exercise is a
 * hard one!)
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main()
{
    int number, left_digit = 0;
    number = get_int("Enter an positiv int number: \n");

    for (int n = 2; n >= 0; n = n - 1)
    {
        left_digit = (int)(number / pow(10, n));
        left_digit = left_digit % 10;

        switch (left_digit)
        {
            case 0:
                printf("zero ");
                break;
            case 1 :
                printf("one ");
                break;
            case 2 :
                printf("two ");
                break;
            case 3 :
                printf("three ");
                break;
            case 4 :
                printf("four ");
                break;
            case 5 :
                printf("five ");
                break;
            case 6 :
                printf("six ");
                break;
            case 7 :
                printf("seven ");
                break;
            case 8 :
                printf("eight ");
                break;
            case 9 :
                printf("nine ");
                break;

            default:
                printf("Error!try another number!\n");
                break;
        }
    }

    printf("\n");

    return 0;
}
