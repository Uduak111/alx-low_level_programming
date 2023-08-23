#include "main.h"
#include <stddef.h>

/**
 * uppercase_string - Changes all lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be modified.
 */
void uppercase_string(char *str)
{
if (str == NULL)
{
return; /* Handle the case of a NULL pointer */
}

for (int i = 0; str[i] != '\0'; i++) {
if (str[i] >= 'a' && str[i] <= 'z') {
str[i] = str[i] - 'a' + 'A';
}
}
}

