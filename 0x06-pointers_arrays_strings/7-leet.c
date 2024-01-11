#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: pointer to the resulting string
 */

char *leet(char *str)
{
	int i, j;
	char leetReplace[] = {'a', 'e', 'o', 't', 'l'};
	char leetWith[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
{
		for (j = 0; j < 5; j++)
{
			if (str[i] == leetReplace[j] || str[i] == (leetReplace[j] - 'A' + 'a'))
				str[i] = leetWith[j];
}
}
	return (str);
}
