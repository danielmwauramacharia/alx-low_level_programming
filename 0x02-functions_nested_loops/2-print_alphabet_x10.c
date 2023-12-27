#include "main.h"

/**
  *print_alphabet_x10 -prints alphabets in lowercase 10 times
  *
  */

void print_alphabet_x10(void)
{
	char alphabets;
	char a;

	for (a = 0; a < 10; a++)
{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
			_putchar(alphabets);
}
	_putchar('\n');
}
}

