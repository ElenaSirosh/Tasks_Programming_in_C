/*
 * chapter 8, exercise 13
 * Modify the sort function from Program 8.12 to take a third argument indicating
 * whether the array is to be sorted in ascending or descending order.Then modify
 * the sort algorithm to correctly sort the array into the indicated order.
 */

// Sort array numbers in ascending order
#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(void)
{
    int i;
    int array[16] =
    {
        34, -5, 6, 0, 12, 100, 56, 22,
        44, -3, -9, 12, 17, 22, 6, 11
    };
    void sort(int a[], int n);
    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }

    sort(array, 16);
    printf("\n\nThe array after the sort:\n");
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}
