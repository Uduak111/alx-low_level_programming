#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to concatenate from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append at most n characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add a terminating null byte */
dest[dest_len + i] = '\0';

return (dest);
}

