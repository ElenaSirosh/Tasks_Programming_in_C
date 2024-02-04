/*
 * chapter 8, exercise 14 program 3
 * Rewrite the functions developed in the last four exercises to use global variables
 * instead of arguments. For example, the preceding exercise should now sort a globally
 * defined array.
 */

// 1st argument n takes quantity
// array elements, and then you need to enter
// this is the number of array elements arr[n]
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int arraySum();
int n;
int arr[5];

int main(int argc, char *argv[])
{
    n = atoi(argv[1]);
    arraySum();
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 2]);
    }
    int sum = arraySum();
    printf("arraySum: %i\n", sum);
    return 0;
}

int arraySum()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
