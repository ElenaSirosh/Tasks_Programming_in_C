/*
 * chapter 8, exercise 16
 * Modify Program 8.14 so that the user can convert any number of integers. Make
 * provision for the program to terminate when a zero is typed in as the value of the
 * number to be converted.
 */

#include <stdio.h>

void getNumberAndBase();
void convertNumber();
void displayConvertedNumber();

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

int main(void)
{
    getNumberAndBase();
    return 0;
}

void getNumberAndBase(void)
{
    // The loop ends when you enter "Number to be converted" 0 //
    while (1)
    {
        printf("Number to be converted (enter 0 to stop)? ");
        scanf("%li", &numberToConvert);
        if (numberToConvert == 0)
        {
            break;
        }
        printf("Base? ");
        scanf("%i", &base);
        if (base < 2 || base > 16)
        {
            printf("Bad base - must be between 2 and 16\n");
        }
        else
        {
            convertNumber();
            displayConvertedNumber();
            // Reset variable
            digit = 0;
        }
    }
}

void convertNumber(void)
{
    // Initialize the variable
    digit = 0;
    do
    {
        convertedNumber[digit] = numberToConvert % base;
        ++digit;
        numberToConvert /= base;
    }
    while (numberToConvert != 0);
}

void displayConvertedNumber(void)
{
    const char baseDigits[16] =
    {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };
    int nextDigit = 0;
    printf("Converted number = ");
    for (--digit; digit >= 0; --digit)
    {
        nextDigit = convertedNumber[digit];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}
