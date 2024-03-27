#include "main.h"
/**
  *counter - A helper function that helps return the length of a string
  *@s: The pointer to the string
  *
  *Return: The length
  */
int counter(char *org)
{
	if (*org == '\0')
		return (1);
	return (1 + counter(org + 1));
}
/**
  *is_palindrome - Checks if a string is a palindrome or not
  *@s: Pointer to the string
  *
  *Return: 0 if not palindrome or 1 if otherwise
  */
int is_palindrome(char *s)
{
	int count, i, j;
	char *org = s;

	count = counter(org);
	i = count;
	j = count;
	if (i == 1)
		return (1);
	if (s[j - 1] != *s && (*s != '\0'))
		return (0);
	else if (s[j - 1] == *s && (*s != '\0'))
{
		j--;
		s++;
		return (is_palindrome(s));
}
	else
		return (1);
}
