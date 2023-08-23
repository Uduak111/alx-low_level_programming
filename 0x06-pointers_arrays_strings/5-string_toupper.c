#include "main.h"

/**
 * string_toupper - Converts lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be converted.
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - ('a' - 'A'); /* Convert lowercase to uppercase */
}
i++;
}

return (str);
}

