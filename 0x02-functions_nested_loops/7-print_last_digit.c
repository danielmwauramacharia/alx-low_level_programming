#include "main.h"

/**
  *print_last_digit -prints the last digit of  a number
  *@a: the number to check
  *
  *Return: c(last digit)
  */

int print_last_digit(int a)
{
	int c;
	int d;
	int e;

	if (a > 0)
{
		c = a % 10;
		return (c);
}
	if (a < 0)
{
		d = (-1 * a);
		e = d % 10;
		return (e);
}
	else
{
		return (0);
}
}

