#include "main.h"

/**
 * times_table - Prints the multiplication table of size 9
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
{
		for (j = 0; j < 10; j++)
{
			mult = i * j;
			if (j == 0)
{
				_putchar(mult + '0');
				_putchar(',');
}
			else
{
				if (mult < 10)
{
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
}
				else
{
					_putchar(' ');
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
}
				if (j < 9)
{
					_putchar(',');
}
}
}
		_putchar('\n');
}
}
