/*
 * chapter 8, exercise 13a
 * Modify the sort function from Program 8.12 to take a third argument indicating
 * whether the array is to be sorted in ascending or descending order.Then modify
 * the sort algorithm to correctly sort the array into the indicated order.
 */

// Sort array numbers in ascending/descending order, depending on whether it is 1 or 0 in the sort function
#include <stdio.h>

void sort(int a[], int n, int x)
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (x == 1)
            {
                // Sort Ascending
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
            else if (x == 0)
            {
                // Sort descending
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
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
    printf("The array before the sort:\n");
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }

    // 0 for ascending sort, 1 for descending sort
    sort(array, 16, 0);
    // sort in ascending order
    printf("\n\nThe array after sorting in ascending order:\n");
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}
