#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string to be encoded.
 * Return: Pointer to the resulting encoded string.
 */
char *rot13(char *str)
{
int i, j;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = rot13[j];
break; /* Found a match, no need to check further */
}
}
}

return (str);
}

