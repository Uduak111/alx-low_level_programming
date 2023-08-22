#include "main.h"
#include <stdio.h>  /* Include necessary headers */

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 * Return: void
 */
int main(void)
{
char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
puts2(str);

return 0;
}

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

