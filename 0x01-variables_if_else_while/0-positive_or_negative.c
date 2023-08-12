#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* This function generates a random number and prints whether
* the number is positive, negative, or zero.
*
* Return: Always 0 (indicating success)
*/

int main(void)
{
int n;

srand(time(0)
);
n = rand() - RAND_MAX / 2;
~
printf("%d ", n);

if (n > 0)
{
printf("is positive");
}
else if (n < 0)
{
printf("is negative");
}
else
{
printf("is zero");
}

printf("\n");

return (0);
}
