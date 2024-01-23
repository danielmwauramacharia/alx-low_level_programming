#include "main.h"

/**
 * find_square_root - Helper function to find the natural square root.
 * @root: The current root being tested.
 * @n: The number to find the square root of.
 *
 * Description: Tests conditions and returns the root if found.
 * Return: The square root if found, otherwise -1.
 */
int find_square_root(int root, int n)
{
	if (n == (root * root))
		return (root);
	else if (root == n || root == -n)
		return (-1);
	else
		return (find_square_root(root + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: Uses recursion to find the natural square root of a number.
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	return (find_square_root(0, n));
}
