#include "main.h"

/**
 * factorial - Computes the factorial of a given number using recursion.
 * @n: Integer representing the number.
 *
 * Description: Returns the factorial of the given number.
 *              If n is less than 0, returns -1 to indicate an error.
 *              The factorial of 0 is 1.
 * Return: The factorial of the given number or -1 in case of an error.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
