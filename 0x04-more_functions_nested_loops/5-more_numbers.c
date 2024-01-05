#include "main.h"

/**
  *more_numbers -prints numbers 0to 14 ten times
  */
void more_numbers(void)
{
	int i;
	int a = 0;

	do {
		for (i = 0; i <= 14; i++)
{
			if (i >= 10)
{
				_putchar(1 + '0');
}
			_putchar(i % 10 + '0');
}
		a = a + 1;
		_putchar('\n');
}
	while (a < 10);
}
