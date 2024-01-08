#include "main.h"

/**
  *print_diagonal -prints a diagonal line using \ character
  *@n: the number of times \ is printed
  */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	if (n <= 0)
{
		_putchar('\n');
		return;
}
	for (i = 1; i <= n; i++)
{
		for (j = 1; j <= i; j++)
{
			_putchar(' ');
}
		_putchar('\\');
		_putchar('\n');
}
}
