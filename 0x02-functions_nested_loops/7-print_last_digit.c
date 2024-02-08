#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
  *print_last_digit -Function calculates the last digit of a number
  *@n: the number
  *
  *Return: return the last digit
  */
int print_last_digit(int n)
{
	int last, x = INT_MIN;

	if (n == x)
{
		last = INT_MAX % 10;
		last = last + 1;
		return (last);
}
	else
{
		last = abs(n) % 10;
		_putchar(last + '0');
		return (last);
}
}
