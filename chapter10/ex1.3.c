/*
 * chapter 10, exercise 1, program 10.3
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    void concat(char result[], const char str1[], const char str2[]);
    const char s1[] = {"Test "};
    const char s2[] = {"works."};
    char s3[20];
    concat(s3, s1, s2);
    printf("%s\n", s3);
    return 0;
}
// Function to concatenate two character strings
void concat(char result[], const char str1[], const char str2[])
{
    int i, j;
    // copy str1 to result
    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }
    // copy str2 to result
    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i + j] = str2[j];
    }
    // Terminate the concatenated string with a null character
    result[i + j] = '\0';
}
