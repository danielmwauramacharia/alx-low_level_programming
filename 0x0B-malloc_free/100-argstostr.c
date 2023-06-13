#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Description: This function concatenates all the command-line arguments
 *              into a single string, separating each argument by a newline
 *              character ('\n'). The resulting string is returned.
 *
 * Return: A pointer to the concatenated string, or NULL if memory allocation fails
 *         or if `ac` is zero or `av` is NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len;
		len = 0;
	}
	total_len += ac;

	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		if (str[len] == '\0')
		{
			str[len++] = '\n';
		}
	}

	return (str);
}
