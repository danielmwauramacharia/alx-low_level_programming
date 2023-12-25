#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char start = 'a';
	char end = 'f';
	char ch;

	for (i = 0; i <= 10; i++)
{
		putchar('0' + i);
}
	for (ch = start; ch <= end; ch++)
{
		putchar(ch);
}
	putchar('\n');

	return (0);
}

