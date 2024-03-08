#include "main.h"
#include <limits.h>

/**
  *print_number - Function that prints an integer
  *@n: The integer to be printed
  *
  *Description: The function doest use long data type
  *The function also does not use array or pointer
  */
void print_number(int n)
{
	int divisor = 1, digit = 0, is_min = 0, l = 0;

	if (n == INT_MIN)
{
		_putchar('-');
		is_min = 1;
		l = -(n % 10);
		n = -(n / 10);
}
	if (n < 0)
{
		_putchar('-');
		n = -n;
}
	while (n / divisor >= 10)
		divisor = divisor * 10;
	while (divisor != 0)
{
		digit = n / divisor;
		_putchar(digit + '0');
		n = n % divisor;
		divisor = divisor / 10;
}
	if (is_min)
		_putchar(l + '0');
}
