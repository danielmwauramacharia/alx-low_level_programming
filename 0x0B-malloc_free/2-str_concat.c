#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A newly allocated string containing the concatenation of s1 and s2,
 *         or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
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

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; i++, j++)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);
}
