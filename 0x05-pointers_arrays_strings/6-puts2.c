#include "main.h"

/**
* puts2 - Prints every other character of a string followed by a new line.
* @str: Pointer to the string to be printed.
* Return: every other character
*/

void puts2(char *str)
{
int(i);

for (i = 0; str[i] != '\0'; i += 2)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
