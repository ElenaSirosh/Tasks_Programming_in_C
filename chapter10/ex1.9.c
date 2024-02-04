/*
 * chapter 10, exercise 1, program 10.9
 * Type in and run the 11 programs presented in this chapter. Compare the output
 * produced by each program with the output presented after each program in the
 * text.
 */

// Program to use the dictionary lookup program
#include <stdbool.h>
#include <stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

// Function to compare two strings
bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return false; // Strings are not equal
        }
        i++;
    }

    // Check if both strings have reached the end
    return s1[i] == '\0' && s2[i] == '\0';
}

// Function to look up a word inside a dictionary
int lookup(const struct entry dictionary[], const char search[], const int entries)
{
    for (int i = 0; i < entries; ++i)
    {
        if (equalStrings(search, dictionary[i].word))
            return i;
    }

    return -1;
}

int main(void)
{
    const struct entry dictionary[100] = {{"aardvark", "a burrowing African mammal"},
                                          {"abyss", "a bottomless pit"},
                                          {"acumen", "mentally sharp; keen"},
                                          {"addle", "to become confused"},
                                          {"aerie", "a high nest"},
                                          {"affix", "to append; attach"},
                                          {"agar", "a jelly made from seaweed"},
                                          {"ahoy", "a nautical call of greeting"},
                                          {"aigrette", "an ornamental cluster of feathers"},
                                          {"ajar", "partially opened"}};

    char word[15];
    int entries = 10;
    int entry;

    printf("Enter word: ");
    scanf("%14s", word);

    entry = lookup(dictionary, word, entries);

    if (entry != -1)
    {
        printf("%s\n", dictionary[entry].definition);
    }
    else
    {
        printf("Sorry, the word %s is not in my dictionary.\n", word);
    }

    return 0;
}
