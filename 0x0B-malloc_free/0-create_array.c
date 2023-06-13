#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of chars and initialize it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Description: This function dynamically allocates an array of chars with the given size
 *              and initializes each element of the array with the specified character.
 *
 * Return: Pointer to the created array, or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
