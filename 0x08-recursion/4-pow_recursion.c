#include "main.h"
/**
  *_pow_recursion - Calculates the value of a int x raised to power y
  *@x: The base number
  *@y: The exponent
  *
  *Return: The result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
