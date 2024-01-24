#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string is composed of digits
 * @str: the string to check
 * Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
}
	return (1);
}

/**
 * str_length - calculates the length of a string
 * @str: the input string
 * Return: the length of the string
 */
unsigned int str_length(char *str)
{
	unsigned int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * print_string - prints a string
 * @str: the string to print
 */
void print_string(char *str)
{
	while (*str == '0')
		str++;

	if (*str == '\0')
		_putchar('0');

	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * _calloc_mem - allocates memory using calloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc_mem(unsigned int nmemb, unsigned int size)
{
	char *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	unsigned int len = 0, len1 = 0, len2 = 0, i, j, carry = 0, temp = 0;

	if (argc != 3 || !(is_digit(argv[1]) && is_digit(argv[2])))
{
		print_string("Error");
		exit(98);
}

	num1 = argv[1];
	num2 = argv[2];

	len1 = str_length(num1);
	len2 = str_length(num2);
	len = len1 + len2;

	result = _calloc_mem(len + 1, sizeof(char));

	if (result == NULL)
{
		print_string("Error");
		exit(98);
}

	for (i = 0; i < len1; i++)
{
		carry = 0;
		for (j = 0; j < len2; j++)
{
			temp = (num1[len1 - i - 1] - '0') * (num2[len2 - j - 1] - '0') + carry + result[len - j - i - 1];
			result[len - j - i - 1] = temp % 10 + '0';
			carry = temp / 10;
		}
		result[len - i - j - 1] += carry + '0';
}

	print_string(result);
	free(result);
	return (0);
}
