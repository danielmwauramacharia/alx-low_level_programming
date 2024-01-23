#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string in a newly allocated space in memory
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	int length, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
{
		length++;
}
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
{
		ptr[i] = str[i];
}
	return (ptr);
}
