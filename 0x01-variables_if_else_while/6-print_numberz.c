#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line. It uses only two putchar calls.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
int x;

for (x = 0; x <= 9; x++)
{
putchar(x + '0');
}
putchar('\n'); /* Print a newline character after the loop */ 
return (0);
}

