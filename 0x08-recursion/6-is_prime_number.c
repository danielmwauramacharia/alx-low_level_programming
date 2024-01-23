#include "main.h"

/**
 * is_prime_number - Determines if a given integer is a prime number.
 * @n: Integer to be checked for primality.
 *
 * Description: Calls a helper function to check if the number is prime.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(2, n));
}

/**
 * check_prime - Helper function to check if a number is prime.
 * @count: Current divisor being tested.
 * @n: The number to check for primality.
 *
 * Description: Recursively checks if the number is divisible by any number
 *              from 2 to n - 1. Returns 1 if prime, 0 otherwise.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int count, int n)
{
	if (n % count == 0 || n < 2)
		return (0);
	else if (n / count == 1)
		return (1);
	else
		return (check_prime(count + 1, n));
}
