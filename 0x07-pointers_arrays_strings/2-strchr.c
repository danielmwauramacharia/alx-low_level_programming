#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: Pointer to the string to check
 * @c: Character to find in the string
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
{
		if (*(s + i) == c)
{
		return (s + i);
		i++;
}
}
	if (*(s + i) == c)
{
		return (s + i);
}
	return (NULL);
}
