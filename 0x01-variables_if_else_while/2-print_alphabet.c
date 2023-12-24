#include <stdio.h>

/**
  *main -Entry point of main function
  *
  *Return: 0(success)
  */

int main(void)
{
	char start = 'a';
	char end = 'z';
	char ch;

	for (ch = start; ch <= end; ch++)
{
		putchar(ch);
}
	putchar('\n');

	return (0);

}
