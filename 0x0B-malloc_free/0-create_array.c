#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *create_array - Creates array of char and populate it with a given char
  *@size: The size of memory to be allocated
  *@c: The character to populate the array
  *
  *Return: pointer to the array created
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = ((char *)malloc(size * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
{
		*(ptr + i) = c;
}
	return (ptr);
	free(ptr);
}

