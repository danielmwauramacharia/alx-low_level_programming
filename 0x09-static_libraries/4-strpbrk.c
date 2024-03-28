#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in a string s
 * @s: String to check.
 * @accept: Set of bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
{
		index = 0;
		while (*(accept + index) != '\0')
{
			if (*(accept + index) == *s)
{
				return (s);
}
			index++;
}
		s++;
}
	return (NULL);
}
