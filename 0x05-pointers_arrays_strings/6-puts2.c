#include "main.h" /* Make sure to include any necessary header files */

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 * Return: every other character
 */

void puts2(char *str)
{
int (i);

for (i = 0; str[1] ! = '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[1]);
}
}
_putchar('\n');
}

