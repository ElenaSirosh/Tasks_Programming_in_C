/*
 * chapter 10, exercise 1, program 10.2
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Function to count the number of characters in a string
#include <stdio.h>

int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        ++count;
    }
    return count;
}
int main(void)
{
    int stringLength(const char string[]);
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', '\0'};
    printf("%i %i %i\n", stringLength(word1), stringLength(word2), stringLength(word3));
    return 0;
}
