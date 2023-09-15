#include <stdarg.h>
#include <stdio.h>

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

