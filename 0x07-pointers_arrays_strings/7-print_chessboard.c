#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; row < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
