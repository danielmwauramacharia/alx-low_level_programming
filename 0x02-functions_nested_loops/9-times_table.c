#include "main.h"

/**
 *times_table -prints multiplication table of size 9
 */

void times_table(void)
{
	int i, j, mult = 0;

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
			else if ((j > 0 && j < 9) && (mult < 10))
{
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
				_putchar(',');
}
			else if ((j > 0 && j < 9) && (mult > 9))
{
				_putchar(' ');
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
				_putchar(',');
}
			else
{
				if ((j == 9) && (mult < 10))
{
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
}
				else
{
					if ((j == 9) && (mult > 9))
{
						_putchar(' ');
						_putchar(mult / 10 + '0');
						_putchar(mult % 10 + '0');
}
}
}
}
		_putchar('\n');
}
}
