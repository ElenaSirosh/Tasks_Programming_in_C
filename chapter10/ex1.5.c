/*
 * chapter 10, exercise 1, program 10.5
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to illustrate the %s scanf format characters
#include <stdio.h>

int main(void)
{
    char s1[81], s2[81], s3[81];
    printf("Enter text:\n");
    scanf("%s%s%s", s1, s2, s3);
    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
    return 0;
}
