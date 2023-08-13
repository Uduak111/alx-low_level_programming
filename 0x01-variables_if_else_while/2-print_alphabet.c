#include <stdio.h>

/**
*main - Entry point of the program
*
*This function generates a random number and print the last digit of the number
*
*Return: Always 0 (indicating success)
*/
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
