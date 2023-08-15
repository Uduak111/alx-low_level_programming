#include <stdio.h>

int main(void)
{
int number;  /* Declare a variable to store the current number */

/* Loop to iterate through single-digit numbers (0 to 9) */
for (number = 0; number < 10; number++)
{
putchar(number + '0');  /* Print the current number as a character */
}

putchar('\n');  /* Print a newline character to start a new line */

return (0);  /* Return 0 to indicate successful execution */
}

