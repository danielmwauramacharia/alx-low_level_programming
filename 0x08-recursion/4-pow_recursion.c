#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y
 * @x: Integer, the base.
 * @y: Integer, the exponent.
 *
 * Description: Returns the result of x raised to the power of y.
 *              If y is less than 0, returns -1.
 * Return: The value of x raised to the power of y or -1 in case of an error.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
