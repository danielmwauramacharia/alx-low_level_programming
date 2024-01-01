#include <stdio.h>
#include "main.h"

/**
  *print_to_98 -prints integers to 98
  *@n: the reference number
  *
  */

void print_to_98(int n)
{
	int c;

	c = 98;

	for (; n > c; n--)
{
		printf("%d, ", n);
}
	for (; n < c; n++)
{
		printf("%d, ", n);
}
	printf("%d", c);
	printf("\n");
}
