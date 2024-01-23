#include "main.h"

/**
 * print_chessboard - Prints out a chessboard.
 *
 * @chessboard: Chessboard to print, 2D array [8] columns.
 *
 * Return: Always void.
 */
void print_chessboard(char (*chessboard)[8])
{
	int row, col = 0;

	while (row < 8)
{
		col = 0;
		while (col < 8)
{
			_putchar(chessboard[row][col++]);
}
	_putchar('\n');
	row++;
}
}
