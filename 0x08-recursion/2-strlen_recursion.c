#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to a string.
 *
 * Description: Recursively calculates the length of the string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
{
		return (0);
}
	s++;
	return (1 + _strlen_recursion(s));
}
