/*
 * chapter 4, exercise 8
 * To round off an integer i to the next largest even multiple of another integer j,
 * the following formula can be used:
 * Next_multiple = i + j - i % j
 * For example, to round off 256 days to the next largest number of days evenly
 * divisible by a week, values of i = 256 and j = 7 can be substituted into the preceding
 * formula as follows:
 * Next_multiple
 *                  = 256 + 7 - 256 % 7
 *                  = 256 + 7 - 4
 *                  = 259
 * Write a program to find the next largest even multiple for the following values of
 *  i and j:
 *  i j
 *  365 7
 *  12,258 23
 *  996 4
 */

#include <stdio.h>

void print_next_multiple(int i, int j)
{
    int Next_multiple = (i + j) - (i % j);

    printf("Next multiple for i = %i, j = %i, %i\n", i, j, Next_multiple);
}

int main(void)
{
    print_next_multiple(365, 7);
    print_next_multiple(12258, 23);
    print_next_multiple(996, 4);

    return 0;
}
