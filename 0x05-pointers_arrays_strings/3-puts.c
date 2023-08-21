#include "main.h" /* Make sure to include any necessary header files */

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n'); /* Print a new line after the string */
}

