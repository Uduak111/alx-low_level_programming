#include "main.h" /* Make sure to include any necessary header files */

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
int start, end; /* Declare the variables at the beginning of the block */
char temp;

start = 0; /* Initialize the variables after their declarations */
end = length - 1;

/* Swap characters from start to end to reverse the string */
while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}

