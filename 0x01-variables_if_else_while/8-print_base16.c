#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the hexadecimal numbers (0-9, a-f)
 *              in lowercase using only three putchar calls.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

for (i = 0; i < 6; i++)
{
putchar(i + 'a');
}

putchar('\n'); /* Add new line after the loop*/

return 0;
}

