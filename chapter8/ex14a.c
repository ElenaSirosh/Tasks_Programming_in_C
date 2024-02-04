/*
 * chapter 8, exercise 14 program 1
 * Rewrite the functions developed in the last four exercises to use global variables
 * instead of arguments. For example, the preceding exercise should now sort a globally
 * defined array.
 */

// Sort array numbers in ascending and descending order,
// without using arguments

#include <stdio.h>

int array[16] =
{
    34, -5, 6, 0, 12, 100, 56, 22,
    44, -3, -9, 12, 17, 22, 6, 11
};

// 0 для сортировки по возрастанию, 1 для сортировки по убыванию
int sort_order = 1;

void sort()
{
    int i, j, temp;
    for (i = 0; i < 16 - 1; ++i)
    {
        for (j = i + 1; j < 16; ++j)
        {
            if (sort_order == 0)
            {
                // sort по возрастанию
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
            else if (sort_order == 1)
            {
                // sort по убыванию
                if (array[i] < array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
}

int main(void)
{
    int i;
    printf("\n Array before sorting:\n");
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }

    // sort in ascending order
    sort();
    printf("\n\n Array after sorting, ");
    if (sort_order == 0)
    {
        printf("Ascending:");
    }
    else if (sort_order == 1)
    {
        printf("descending:\n");
    }
    for (i = 0; i < 16; ++i)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");

    return 0;
}
