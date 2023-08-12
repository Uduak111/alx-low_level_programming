#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number, assigns it to the variable 'n',
 * and prints whether the number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator */
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Print the generated number */
    printf("The number %d is ", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }

    /* Print a new line */
    printf("\n");

    return (0);
}

