#include "main.h"

/**
  *_puts -prints a string in the stdout
  *@str: the string
  */
void _puts(char *str)
{
	while (*str != '\0')
{
		_putchar(*str);
		str++;
}
	_putchar('\n');
}
