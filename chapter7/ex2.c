/*
 * chapter 7, exercise 2
 * Modify Program 7.1 so that the elements of the array values are initially set to 0.
 * Use a for loop to perform the initialization.
 */

#include <stdio.h>

int main(void)
{
    int index;
    for (index = 0; index < 10; ++index)
    {
        int values[10];
        printf("values[%i] = %i\n", index, values[index]);
    }
    return 0;
}
