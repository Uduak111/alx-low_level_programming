#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print number separated by a specified separator, followed by
 * a new line
 * @separator: The string to be printed between numbers. If NULL, no separator
 * is printed
 * @n: The number of integers passed to the function.
 *
 * This function takes a variable number of integer arguments and print them to
 * the standard output.
* Numbers are separated by the specified separator (if not NULL), and a newline
 * character is
 * printed at the end to ensure a new line after the numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);

/* Print the separator if it's not NULL and not the last number */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);

/* Print a newline character at the end */
printf("\n");
}

