#include <stdio.h>

/**
  *main -Entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int i, n;
	unsigned long first = 1, second = 2, next;

	n = 98;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (i = 3; i <= n; i++)
{
		next = first + second;
		if (i < 98)
{
			printf("%lu, ", next);
			first = second;
			second = next;
}
		else
{
			printf("%lu", next);
			first = second;
			second = next;
}
}
	printf("\n");
	return (0);
}
