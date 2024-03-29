#include "main.h"

/**
 * _strncat - concatenates two strings with a limit
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes from src to append
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
{
		dest_len++;
}
	while (src[i] != '\0' && i < n)
{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
}
	dest[dest_len] = '\0';
	return (dest);
}
