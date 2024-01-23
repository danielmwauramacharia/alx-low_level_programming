#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
{
		ptr[i] = s1[i];
}
	for (j = 0; j <= len2; j++)
{
		ptr[i + j] = s2[j];
}
	return (ptr);
}
