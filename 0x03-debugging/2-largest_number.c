#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
{
		largest = a;
}
	if (b > a && b > c)
{
		largest = b;
}
	if (c > a && c > b)
{
		largest = c;
}
	if (a == b && b > c)
{
		largest = b;
}
	else
{
		largest = c;
}
	if (a == c && a > b)
{
		largest = a;
}
	else
{
		largest = b;
}
	if (c == b && b > a)
{
		largest = b;
}
	else
{
		largest = a;
}
	return (largest);
}
