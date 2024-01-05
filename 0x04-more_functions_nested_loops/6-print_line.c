#include "main.h"

/**
  *print_line -prints lines based on an _
  *@n: Number of times _ is printed
  */
void print_line(int n)
{
	int i;

	if (n != 0 && n > 0)
{
		for (i = 0; i <= n; i++)
{
			_putchar('_');
}
	_putchar('\n');
}
}
