#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything according to the specified format.
 * @format: A format string that specifies the types of arguments to be printed
 *
 * This function takes a format string and a variable number of arguments. It
 * prints
 * the arguments based on the format string, where each character in the format
 * string corresponds to a type of argument to be printed. Supported format
 * specifiers:
 *   - 'c': char
 *   - 'i': integer
 *   - 'f': float
 *   - 's': char * (if the string is NULL, it prints "(nil)" instead)
 * Any other character in the format string is ignored.
 *
 * You are not allowed to use for, goto, ternary operator, else, do ... while.
 * You can use a maximum of 2 while loops and 2 if statements.
 * You can declare a maximum of 9 variables.
 * You are allowed to use printf.
 * A newline character is printed at the end of the function.
 */
void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);
    char *separator = "";
    int i = 0;

    va_start(args, format);

    while (format && format[i]) {
        switch (format[i]) {
            case 'c':
                printf("%s%c", separator, va_arg(args, int));
                break;
            case 'i':
                printf("%s%d", separator, va_arg(args, int));
                break;
            case 'f':
                printf("%s%f", separator, va_arg(args, double));
                break;
            case 's':
                {
                    char *str = va_arg(args, char *);
                    if (str == NULL) {
                        printf("%s(nil)", separator);
                    } else {
                        printf("%s%s", separator, str);
                    }
                }
                break;
        }
        separator = ", ";
        i++;
    }
    
    va_end(args);
    printf("\n");
}

