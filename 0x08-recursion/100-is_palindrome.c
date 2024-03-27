#include "main.h"
/**
  *counter - A helper function that helps return the length of a string
  *@org: The pointer to the string
  *
  *Return: The length
  */
int counter(char *org)
{
	if (*org == '\0')
		return (0);
	return (1 + counter(org + 1));
}
/**
  *helper - A helper function that checks if s is a palindrom
  *@s: The string
  *@start: the starting index
  *@end: The last index
  *
  *Return: 1 if palindrome 0 0therwise
  */
int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1));
}

/**
  *is_palindrome - Checks if a string is a palindrome or not
  *@s: Pointer to the string
  *
  *Return: 0 if not palindrome or 1 if otherwise
  */
int is_palindrome(char *s)
{
	int length = counter(s);

	return (helper(s, 0, length - 1));
}
