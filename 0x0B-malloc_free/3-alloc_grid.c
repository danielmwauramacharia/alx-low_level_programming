#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated 2D array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
{
		while (i >= 0)
{
			free(arr[i]);
			i--;
}
		free(arr);
		return (NULL);
}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
}
	return (arr);
}
