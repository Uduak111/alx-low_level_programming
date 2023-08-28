#include "main.h"

/**
 * print_chessboard - Print a simple chessboard
 * @a: The 2D array representing the chessboard
 *
 * Description: The array 'a' has 8 rows, and each row contains
 * 8 characters representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            _putchar(a[i][j]);
        }
        _putchar('\n');
    }
}

