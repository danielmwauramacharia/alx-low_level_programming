#include "main.h"
#include <limits.h>
/**
  *print_number -prints any passed integer
  *@n: the passed integer
  *
  */
void print_number(int n)
{
	const int a = n;
	char buffer[20];
	int i = 0, j, digit, l;

	if (n == 0)
		_putchar('0');
	if ((n < 0) && (!(n == INT_MIN)))
{
		_putchar('-');
		n = -n;
}
	if (n == INT_MIN)
{
		_putchar('-');
		l = -(n % 10);
		n = -(n / 10);
}
	while (n != 0)
{
		digit = n % 10;
		buffer[i++] = digit + '0';
		n /= 10;
}
	for (j = i - 1; j >= 0; j--)
{
		_putchar(buffer[j]);
}
	if (a == INT_MIN)
		_putchar(l + '0');
}
