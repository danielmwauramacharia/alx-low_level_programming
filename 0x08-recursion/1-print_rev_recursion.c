#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to a string.
 *
 * Description: Recursively prints each character in reverse order.
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
{
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
}
