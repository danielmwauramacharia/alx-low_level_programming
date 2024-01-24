#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the old memory block
 * @new_size: Size of the new memory block
 *
 * Return: A pointer to the newly allocated memory block, or NULL if the
 * function fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;

	old_ptr = ptr;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
{
		new_ptr = malloc(new_size);
		return (new_ptr);
}
	if (new_size == 0 && ptr != NULL)
{
		free(ptr);
		return (NULL);
}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
}
	else
{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
}
	free(ptr);
	return (new_ptr);
}
