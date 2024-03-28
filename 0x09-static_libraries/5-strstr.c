#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurrence, *tempNeedle;

	if (!*needle)
{
		return (haystack);
}
	while (*haystack)
{
		if (*haystack == *needle)
{
			occurrence = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
{
				if (*haystack++ != *tempNeedle++)
{
					haystack = occurrence;
					break;
}
}
			if (occurrence != haystack)
{
				return (occurrence);
}
}
	haystack++;
}
	return (NULL);
}
