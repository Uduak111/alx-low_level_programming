#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size) {
    unsigned int i;

    for (i = 0; i < size; i++) {
        if (i % 10 == 0 && i != 0) {
            _putchar('\n');
        } else if (i != 0) {
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

