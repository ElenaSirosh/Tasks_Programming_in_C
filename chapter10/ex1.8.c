/*
 * chapter 10, exercise 1, program 10.8
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

#include <stdio.h>
#include <stdbool.h>

/***** Insert alphabetic function here *****/
/***** Insert readLine function here *****/
/***** Insert countWords function here *****/
int main (void)
{
char text[81];
int totalWords = 0;
int countWords (const char string[]);
void readLine (char buffer[]);
bool endOfText = false;
printf ("Type in your text.\n");
printf ("When you are done, press 'RETURN'.\n\n");
while ( ! endOfText )
{
readLine (text);
if ( text[0] == '\0' )
endOfText = true;
else
totalWords += countWords (text);
}
printf ("\nThere are %i words in the above text.\n", totalWords);
return 0;
}
