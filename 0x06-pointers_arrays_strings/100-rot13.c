#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the input string
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
{
		for (j = 0; original[j] != '\0'; j++)
{
			if (s[i] == original[j])
{
				s[i] = encoded[j];
				break;
}
}
}
	return (s);
}
