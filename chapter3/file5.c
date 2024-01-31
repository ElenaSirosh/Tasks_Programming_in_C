/*
 * chapter 3, exercise 5
 * Identify the syntactic errors in the following program.Then type in and run the
 * corrected program to ensure you have correctly identified all the mistakes.
 * #include <stdio.h>
 * int main (Void)
 * (
 * 20 Chapter 3 Compiling and Running Your First Program
 * INT sum;
 * /* COMPUTE RESULT
 * sum = 25 + 37 - 19
 * /* DISPLAY RESULTS //
 * printf ("The answer is %i\n" sum);
 * return 0;
 * }
 */

#include <stdio.h>
int main(void)
{
    int sum;
    sum = 25 + 37 - 19;
    printf("The answer is %i\n", sum);

    return 0;
}
