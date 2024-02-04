/*
 * chapter 8, exercise 11
 * Write a function called arraySum that takes two arguments: an integer array and
 * the number of elements in the array. Have the function return as its result the sum
 * of the elements in the array.
 */

// first argument n takes quantity
//array elements, and then you need to enter
//this number of array elements arr[n]
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int arraySum(int n, int arr[]);

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = atoi(argv[i + 2]);
    }
    int sum = arraySum(n, arr);
    printf("arraySum: %i\n", sum);
    return 0;
}

int arraySum(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
