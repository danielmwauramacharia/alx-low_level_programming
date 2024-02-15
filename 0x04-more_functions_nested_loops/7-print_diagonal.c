#include "main.h"

/**
  *print_diagonal - prints a diagonal line
  *@n: the size of the line
  */
void print_diagonal(int n)
{
	int i = 0, j;

	if (!(n == 0 || n < 0))
		while (i < n)
{
			if (i == 0)
{
				_putchar('\\');
				_putchar('\n');
}
			else
{
				j = 0;
				while (j < i)
{
					_putchar(' ');
					j++;
}
				_putchar('\\');
				_putchar('\n');
}
			i++;
}	else
		_putchar('\n');
}
