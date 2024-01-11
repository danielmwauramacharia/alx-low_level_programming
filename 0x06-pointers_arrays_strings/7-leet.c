#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: pointer to the resulting string
 */
char *leet(char *s)
{
	int i, j;
	char leet[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
{
		for (j = 0; leet[j] != '\0'; j++)
{
			if (s[i] == leet[j])
{
				s[i] = replace[j];
				break;
}
}
}
	return (s);
}
