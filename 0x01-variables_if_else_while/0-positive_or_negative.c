#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* betty style doc for function main goes there */
int main(void) {
    int n;

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

