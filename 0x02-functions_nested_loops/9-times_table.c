#include "main.h"

/**
  *times_table -produces a timestable of size 9
  */


void times_table(void)
{
	int i = 0;
	int j = 0;
	int a;

	for (i = 0; i <= 9; i++)
{
		for (j = 0; j <= 9; j++)
{
			a = i * j;
			if (a > 9)
{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
}
			else
{
				if (a < 10)
{
					_putchar(' ');
}
				_putchar(a + '0');
}
			if (j < 9)
{
				_putchar(',');
				_putchar(' ');
}
}
		_putchar('\n');
}
	_putchar('\n');
}
