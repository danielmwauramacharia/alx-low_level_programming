#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to a string.
 *
 *Return: s
 */
int is_palindrome(char *s)
{
	return (helper_palindrome(s, find_length(s) - 1, 0));
}
/**
 * find_length - Computes the length of a string.
 * @s: Pointer to a string.
 *
 * Return: The length of the string.
 */
int find_length(char *s)
{
	if (*s != '\0')
		return (find_length(s + 1) + 1);
	else
		return (0);
}
/**
 * helper_palindrome - Helper function to check if a string is a palindrome.
 * @s: Pointer to a string.
 * @len: Length of the string.
 * @a: Starting index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int helper_palindrome(char *s, int len, int a)
{
	if (len == a)
		return (1);
	else if (len - a == 1)
{
	if (s[len] == s[a])
		return (1);
	else
		return (0);
}
	else if (s[len] != s[a])
		return (0);
	else
		return (helper_palindrome(s, --len, ++a));
}
