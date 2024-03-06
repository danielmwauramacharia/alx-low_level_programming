#include "main.h"

/**
  *puts_half - Prints half of a string
  *@str: The string to be printed
  *
  */
void puts_half(char *str)
{
	int i = 0, start, len, n, count = 0;

	while (str[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	if (!(len % 2 == 0))
{
		n = (len - 1) / 2;
		start = n + 1;
}
	else
		start = len / 2;
	while (start < len)
{
		_putchar(str[start]);
		start++;
}
	_putchar('\n');
}
