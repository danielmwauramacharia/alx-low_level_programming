#include "main.h"
#include <limits.h>

/**
*_atoi - converts a string to an integer
*@s: the input string
*
*Return: the converted integer
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s != '\0' && (*s < '0' || *s > '9'))
{
		if (*s == '-')
{
			sign *= -1;
}
		s++;
}
	while (*s >= '0' && *s <= '9')
{
		digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
{
			return ((sign == 1) ? INT_MAX : INT_MIN);
}
		result = result * 10 + digit;
		s++;
}
		return (sign * result);
}
