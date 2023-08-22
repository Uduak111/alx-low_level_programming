#include "main.h" /* Make sure to include any necessary header files */

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]); /* Print the current character */

i += 1; /* Move to the next character with a step of 1 */
}

_putchar('\n'); /* Print a new line after printing characters */
}

