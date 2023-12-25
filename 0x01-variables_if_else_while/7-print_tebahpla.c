#include <stdio.h>

/**
  *main -Entry point to the program
  *
  *Return: 0(success)
  */

int main(void)
{
	char start = 'a';
	char end = 'z';

	char ch = '\0';

	for (ch = end; ch >= start; ch--)
{
		putchar(ch);
}
	putchar('\n');

	return (0);
}
