#include "main.h"

/**
  *cap_string - function that capitalizes all words of a string
  *@s: The string
  *Return: A pointer to the string
  */
char *cap_string(char *s)
{
	char *ptr = s;

	if (*ptr != '\0' && (*ptr >= 97 && *ptr <= 122))
		*ptr = *ptr - 32;
	ptr++;
	while (*ptr != '\0')
{
		if (*ptr == ' ' || *ptr == 9 || *ptr == 10 || *ptr == ','
			|| *ptr == ';' || *ptr == '.' || *ptr == '!' ||
			*ptr == '?' || *ptr == '"' || *ptr == '(' ||
			*ptr == ')' || *ptr == '{' || *ptr == '}')
{
			ptr++;
			if (*ptr >= 97 && *ptr <= 122)
				*ptr = *ptr - 32;
			else
				continue;
}
		ptr++;
}
	return (s);
}
