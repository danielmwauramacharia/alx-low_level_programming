#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: Pointer to a string.
 *
 * Description: Recursively prints each character of the string,
 *              followed by a new line when the end of the string is reached.
 * Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
{
		_putchar('\n');
		return;
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
