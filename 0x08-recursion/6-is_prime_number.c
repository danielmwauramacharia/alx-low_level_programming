#include "main.h"
int finder(int n, int x, int y);
/**
  *finder - Function that finds if a number is prime or not
  *@n: The number
  *@x: The start divisor
  *@y: The limit up to where to get the divisor
  *
  *Return: 0 if a divisor is found or 1 otherwise
  */
int finder(int n, int x, int y)
{
	if (n % x == 0 && x <= y)
		return (0);
	else if (n % x != 0 && x <= y)
		return (finder(n, x + 1, y));
	else
		return (1);
}
/**
  *is_prime_number - Checks if a number is prime or not
  *@n: The number to be checked
  *
  *Return: 0 if not prime or 1 if prime
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (finder(n, 2, n / 2));
}
