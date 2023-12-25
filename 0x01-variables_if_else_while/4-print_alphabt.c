#include <stdio.h>

/**
  *main -Entry point of the program
  *
  *Return: 0(success)
  */

int main(void)
{
	char start = 'a';
	char end = 'z';
	char out1 = 'q';
	char out2 = 'e';
	char ch = '\0';

	for (ch = start; ch <= end; ch++)
{
		if ((ch == out1 || ch == out2))
{
			continue;
}
		putchar(ch);
}
	putchar('\n');

	return (0);
}

