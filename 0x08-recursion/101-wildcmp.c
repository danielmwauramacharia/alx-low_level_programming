#include "main.h"
/**
  *wildcmp - Compares two string by allowing use of wild char
  *@s1: The string compared
  *@s2: The string compared aganist
  *
  *Return: 1 if they compare or 0 otherwise
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1 , s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
}
	return (0);
}
