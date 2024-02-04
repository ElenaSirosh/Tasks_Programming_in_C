/*
 * chapter 10, exercise 1, program 10.6
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>

int main(void)
{
    int i;
    char line[81];
    void readLine(char buffer[]);
    for (i = 0; i < 3; ++i)
    {
        readLine(line);
        printf("%s\n\n", line);
    }
    return 0;
}
// Function to read a line of text from the terminal
void readLine(char buffer[])
{
    char character;
    int i = 0;
    do
    {
        character = getchar();
        buffer[i] = character;
        ++i;
    }
    while (character != '\n');
    buffer[i - 1] = '\0';
}
