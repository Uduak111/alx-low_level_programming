#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        if (i % 10 == 0 && i != 0)
        {
            _putchar('\n');
        }
        else if (i != 0)
        {
            _putchar(' ');
        }

        // Print the hexadecimal value using _putchar
        char hex_digits[] = "0123456789ABCDEF";
        _putchar('0');
        _putchar('x');
        _putchar(hex_digits[(buffer[i] >> 4) & 0xF]);
        _putchar(hex_digits[buffer[i] & 0xF]);
    }
    _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('-');
    _putchar('\n');
    simple_print_buffer(buffer, 98);
    return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return s;
}

