#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters to be summed.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0; /* Moved the declaration to the beginning */
unsigned int i; /* Declare the loop counter here */

if (n == 0)
{
return (0);
}

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}

