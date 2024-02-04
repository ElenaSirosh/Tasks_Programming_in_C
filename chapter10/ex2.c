/*
 * chapter 10, exercise 2
 * Why could you have replaced the while statement of the equalStrings function
 * of Program 10.4 with the statement
 * while ( s1[i] == s2[i] && s1[i] != '\0' )
 * to achieve the same results?
 */

// in exercise 10.4 can change while to
// while ( s1[i] == s2[i] && s1[i] != '\0' ), so
// how we check s1[i] != '\0' and s1[i] == s2[i].
// it was like this - while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')

// Function to determine if two strings are equal
#include <stdbool.h>
#include <stdio.h>

bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;
    while (s1[i] == s2[i] && s1[i] != '\0')
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
