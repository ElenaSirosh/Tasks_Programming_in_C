/*
 * chapter 10, exercise 1, program 10.4
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Function to determine if two strings are equal
#include <stdbool.h>
#include <stdio.h>

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        ++i;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        areEqual = true;
    }
    else
    {
        areEqual = false;
    }
    return areEqual;
}
int main(void)
{
    bool equalStrings(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";
    printf("%i\n", equalStrings(stra, strb));
    printf("%i\n", equalStrings(stra, stra));
    printf("%i\n", equalStrings(strb, "string"));
    return 0;
}
