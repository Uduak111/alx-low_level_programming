#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
if (*s == '\0')
{
/* Base case: end of string */
putchar('\n');
return;
}

/* Print the current character */
    putchar(*s);

/* Call the function recursively with the next character in the string */
_puts_recursion(s + 1);
}

int main()
{
char myString[] = "Hello, World!";
_puts_recursion(myString);

return (0);
}

