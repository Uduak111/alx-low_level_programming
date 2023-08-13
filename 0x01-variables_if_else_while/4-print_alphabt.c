#include <stdio.h>

/**
*main - Entry point of the program
*
* Tis function print the lowercase alphabet excluding 'q' and 'e'
* followed by a new line using the putchar function
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
char letter;


for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}


putchar('\n');


return (0);
}
