#include <stdlib.h>
int _strlen(char *s);

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	int len = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]);

	len = len + 1 + ac;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++, k++)
		result[k] = av[i][j];
		result[k] = '\n';
		k++;
}
	result[k] = '\0';
	return (result);
}

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int total;

	for (total = 0; s[total] != '\0'; total++)
		;
	return (total);
}
