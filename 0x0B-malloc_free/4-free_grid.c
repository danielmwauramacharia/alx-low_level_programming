#include "stdlib.h"

/**
 * free_grid - Frees a 2D grid created by alloc_grid
 * @grid: Pointer to the 2D array
 * @height: Height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
