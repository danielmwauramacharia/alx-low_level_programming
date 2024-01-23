#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0;

	for (; *str != '\0';)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; *str != ' ' && *str != '\0';)
				str++;
			count++;
		}
	}
	return (count);
}

/**
 * free_all - Frees allocated memory for words
 * @words: Pointer to the array of words
 * @index: Index to iterate over the array
 */
void free_all(char **words, int index)
{
	for (; index > 0;)
		free(words[--index]);
	free(words);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of words, or NULL if fails
 */
char **strtow(char *str)
{
	int total_words = 0, word_index = 0, char_index = 0, length = 0;
	char **word_array, *word_start;

	if (str == NULL || *str == '\0')
		return (NULL);

	total_words = count_words(str);

	if (total_words == 0)
		return (NULL);

	word_array = malloc((total_words + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);

	for (; *str != '\0' &&  word_index < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			word_start = str;

			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}

			word_array[word_index] = malloc((length + 1) * sizeof(char));
			if (word_array[word_index] == NULL)
			{
				free_all(word_array, word_index);
				return (NULL);
			}

			while (*word_start != ' ' && *word_start != '\0')
			{
				word_array[word_index][char_index] = *word_start;
				word_start++;
				char_index++;
			}

			word_array[word_index][char_index] = '\0';
			word_index++;
			char_index = 0;
			length = 0;
			str++;
		}
	}
	return (word_array);
}
