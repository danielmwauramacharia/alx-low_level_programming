#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height dimension of the array.
 *
 * Description: This function frees the memory allocated for a 2D array.
 *              It iterates through each row of the array and frees the memory
 *              allocated for that row. Finally, it frees the memory for the
 *              array itself.
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
