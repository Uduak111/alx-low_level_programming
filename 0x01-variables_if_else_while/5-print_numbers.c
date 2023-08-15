#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 *              starting from 0, followed by a new line.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
int number; /**< Variable to store the current number */

    /**< Loop to iterate through single-digit numbers (0 to 9) */
for (number = 0; number < 10; number++)
{
putchar(number + '0'); /**< Print the current number as a character */
}

putchar('\n'); /**< Print a newline character to start a new line */

return (0); /**< Return 0 to indicate successful execution */
}

