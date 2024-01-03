#include <stdio.h>

/**
  *main -entry to our program
  *
  *Return: 0 (success)
  */

int main(void)
{
	int i, mult3, mult5, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
{
		mult3 = i % 3;
		mult5 = i % 5;

		if (mult3 == 0 || mult5 == 0)
{
			sum += i;
}
}
	printf("%d\n", sum);
	return (0);
}
