#include "main.h"  /* Include necessary headers */
#include <limits.h> /* Include the limits.h header */

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;  /* Initialize sign as positive */

    /* Skip leading whitespace characters */
    while (*s == ' ' || (*s >= 9 && *s <= 13))
    {
        s++;
    }

    /* Handle signs */
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
	{
            sign = -1;
        }
        s++;
    }

    /* Convert characters to integer */
    while (*s >= '0' && *s <= '9')
    {
        /* Check for overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
	{
            /* Handle overflow, return INT_MAX or INT_MIN based on the sign */
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}

