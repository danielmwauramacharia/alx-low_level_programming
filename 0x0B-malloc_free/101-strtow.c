#include <stdlib.h>
#include "main.h"

/**
 * count_word - Counts the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words in the string.
 */
int count_word(char *s)
{
	int flag, count, words;

	flag = 0;
	words = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (Success), or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, word_count, count = 0, start, end;

	while (*(str + len))
		len++;
	word_count = count_word(str);
	if (word_count == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - count;
				k++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
