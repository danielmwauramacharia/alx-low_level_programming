#include "main.h"

/**
  *_isalpha -checks whether is alphabets
  *@c: the character to be checked
  *
  *Return: 1(sucess) 0(otherwise)
  */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
{
		return (1);
}
	else
{
		return (0);
}
}
