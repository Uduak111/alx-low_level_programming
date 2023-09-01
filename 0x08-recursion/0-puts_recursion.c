#include <stdio.h>

/**
 * outputs a single character.
 *
 * @param c The character to be outpu.
 */
void printStringWithNewLine(const char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');

}

int main()
{
printStringWithNewLine("Puts with recursion");
return (0);
}
