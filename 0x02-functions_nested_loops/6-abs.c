#include "main.h"

/**
  *_abs -gives the absolute value of a number
  *@a: th data type of argument
  *
  *Return: the absolute int that is passed
  */

int _abs(int a)
{
	int n;

	if (a < 0)
{
		n = (-1 * a);
		return (n);
}
	if (a > 0)
{
		return (a);
}
	else
{
		return (0);
}
}
