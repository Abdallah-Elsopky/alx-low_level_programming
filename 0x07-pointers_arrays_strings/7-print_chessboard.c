#include "main.h"

/**
 * print_chessboard - Prints the chessboard configuration.
 * @a: 2D array representing the chessboard
 *
 * Description:
 * This function prints the characters stored in the 2D array 'a',
 * which represents the configuration of a chessboard.
 * It prints each character followed by a newline after each row.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char k = a[i][j];

			_putchar(k);
		}
		_putchar('\n');
	}
}
