#include "main.h" /* Make sure to include any necessary header files */

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;
int i; /* Declare the variable outside the loop */

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Print the string in reverse order */
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n'); /* Print a new line after the reversed string */
}

