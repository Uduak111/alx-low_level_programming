#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings separated by a specified separator, followed
 * by a newline.
 * @separator: The string to be printed between the strings. If NULL, no
 * separator is printed.
 * @n: The number of strings passed to the function.
 *
 * This function takes a variable number of string arguments and prints them to
 * the standard output.
 * Strings are separated by the specified separator (if not NULL), and if a
 * string is NULL,
 * it prints "(nil)" instead. A newline character is printed at the end to
 * ensure a new line after the strings.
 */
void print_strings(const char *separator, const unsigned int n, ...) {
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
const char *str = va_arg(args, const char *);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

/* Print the separator if it's not NULL and not the last string */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

va_end(args);

/* Print a newline character at the end */
printf("\n");
}

