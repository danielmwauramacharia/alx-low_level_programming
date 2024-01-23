#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes
 * @size: Size of the array
 * @c: Specific character for initialization
 *
 * Return: Pointer to the created array or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
{
		ptr[j] = c;
}
	return (ptr);
}
