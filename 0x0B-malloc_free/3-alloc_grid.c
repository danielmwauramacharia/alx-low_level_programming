#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *alloc_grid - Function that returns a pointer to a 2D array integers
  *@width: The rows of the 2D array
  *@height: The columns of the 2D array
  *
  *Return: The pointer if successful or NULL otherwise
  */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = ((int **)malloc(height * sizeof(int *)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
{
		ptr[i] = ((int *)malloc(width * sizeof(int)));
		if (ptr[i] == NULL)
{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
}
}
	for (i = 0; i < height; i++)
{
		for (j = 0; j < width; j++)
{
			ptr[i][j] = 0;
}
}
	return (ptr);
}
