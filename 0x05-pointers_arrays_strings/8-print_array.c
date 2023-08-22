#include <stdio.h> /* Include the necessary header file for printf */

/**
* print_array -  Prints n element of an array of integer followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]); /* Print the current integer */

if (i != n - 1)
{
printf(", "); /* Print a comma and space unless it's the last element */
}
}

printf("\n"); /* Print a new line after printing the elements */
}

