#include "main.h"

/**
 * _memcpy - copies n bytes of memory
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy from src to dest
 * Return: pointer to the beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	for (; n > 0; --n)
{
		*dest++ = *src++;
}
	return (start);
}
