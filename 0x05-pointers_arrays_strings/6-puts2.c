#include "main.h"

/**
  *puts2 - function that prints every other character in a string
  *@str: The string to be printed
  *
  */
void puts2(char *str)
{
	int i = 0, j = 0, count = -1, len;

	while (str[i] != '\0')
{
		count++;
		i++;
}
	len = count;
	while (j <= len)
{
		_putchar(str[j]);
		j = j + 2;
}
	_putchar('\n');
}
