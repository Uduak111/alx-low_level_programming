#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Description: This function generates a random number, assigns it to the
* variable 'n', and prints whether the number is positive, negative, or zero.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

/* Seed the random number generator */
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Check if the number is positive, negative, or zero */
if (n > 0)
)
printf("%d is positive\n", n);
}
else if (n < 0)
}
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
