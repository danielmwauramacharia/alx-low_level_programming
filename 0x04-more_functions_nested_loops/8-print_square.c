#include "main.h"

/**
  *print_square -print square of a given size
  *@size: The size
  */
void print_square(int size)
{
	int i;
	int a = 1;

	do {
		if (size != 0 && size > 0)
{
			for (i = 1; i <= size; i++)
{
				_putchar('#');
}
		_putchar('\n');
}
		else
{
			_putchar('\n');
}
		a = a + 1;
}
	while (a <= size);
{
}
}
