#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line. It uses only two putchar calls.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
int x;

for (x = 48; x <= 57; x++)
{
putchar(x + '48');
putchar('\n');
}
return (0);
}

