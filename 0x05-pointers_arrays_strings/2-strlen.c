#include "main.h"

/**
  *_strlen -returns the length of a given string
  *@s: the string
  *
  *Return: length on success
  */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
{
		length++;
}
	return (length);
}
