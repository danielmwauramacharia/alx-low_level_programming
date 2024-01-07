#include "main.h"

/**
  *print_triangle -prints triangle using # symbol
  *@size: the size of the triangle
  */
void print_triangle(int size)
{
	int i, j, k = 1;

	if (size <= 0)
{
		_putchar('\n');
		return;
}
	for (i = 1; i <= size; i++)
{
		for (j = 1; j <= size - i; j++)
{
			_putchar(' ');
}
		for (k = 1; k <= i; k++)
{
			_putchar('#');
}
		_putchar('\n');
}
}
