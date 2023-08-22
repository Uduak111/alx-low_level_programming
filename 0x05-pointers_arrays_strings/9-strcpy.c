#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src to dest, including '\0'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i]; /* Copy each character from src to dest */
i++;
}

dest[i] = '\0'; /* Add the null terminator to the destination */

return (dest) /* Return a pointer to the destination buffer */
}

