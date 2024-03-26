#include "main.h"
/**
  *helper - This is a function that helps to return the square root of a number
  *@n: The number we are finding the root
  *@i: Iterating from one to the sqareroot
  *
  *Return: -1 if no square root found and the square root if found
  */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	i++;
	return (helper(n, i));
}
/**
  *_sqrt_recursion - Returns the square root of a number
  *@n: The number to find square root
  *
  *Return: -1 if no square root found or the square root
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
