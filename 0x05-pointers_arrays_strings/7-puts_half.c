#include "main.h" /* Make sure to include any necessary header files */

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
    int length = 0;
    
    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Declare variables at the beginning of the block */
    int start = (length - 1) / 2 + 1;
    
    /* Print the characters starting from the calculated index */
    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }
    
    _putchar('\n'); /* Print a new line after printing characters */
}

