#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append characters from src to dest */
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add a terminating null byte */
dest[dest_len + i] = '\0';

return (dest);
}

