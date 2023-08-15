#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of
 * single-digit numbers in ascending order, separated by ", ".
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n'); /* Add new line after the loop */

return 0;
}

