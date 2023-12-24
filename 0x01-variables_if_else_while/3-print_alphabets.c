#include <stdio.h>

/**
  *main -Entry point of program
  *
  *Return: 0(success)
  */

int main(void)
{
	char start = 'a';
	char end = 'z';
	char start1 = 'A';
	char end2 = 'Z';

	char ch;

	for (ch = start; ch <= end; ch++)
{
		putchar(ch);
}
	for (ch = start1; ch <= end2; ch++)
{
		putchar(ch);
}
	putchar('\n');

	return (0);

}
