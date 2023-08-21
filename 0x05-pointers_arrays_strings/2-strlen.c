#include "main.h" /* Make sure to include any necessary header files */

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the input string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

return length;
}

