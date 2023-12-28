#include "main.h"

/**
  *print_sign -prints sign of a number
  *@n: the number to be checked
  *
  *Return: 1(positive) -1(negative) 0(for zer0)
  */

int print_sign(int n)
{
	if (n > 0)
{
		_putchar('+');
		return (1);
}
	if (n < 0)
{
		_putchar('-');
		return (-1);
}
	else
{
		_putchar('0');
		return (0);
}
}
