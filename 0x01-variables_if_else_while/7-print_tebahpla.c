#include <cstdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              followed by a new line. It uses only two putchar calls.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
for (char c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');

return (0);
}

