#include "main.h"

/**
  *_isdigit -checks if a digit 0 through 9
  *@c: the digit to be checked
  *
  *Return: 1 success
  */
int _isdigit(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c < 0 && c > 9))
{
	return (0);
}
	else
{
		return (1);
}
}
