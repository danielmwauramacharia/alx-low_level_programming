#include <stdio.h>

/**
  *main -Entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int i, n = 98;
	long first = 1, second = 2, next;

	printf("%ld, ", first);
	printf("%ld, ", second);

	for (i = 3; i <= n; i++)
{
		next = first + second;
		if (i < 98)
{
			printf("%ld, ", next);
			first = second;
			second = next;
}
		else
{
			printf("%ld", next);
			first = second;
			second = next;
}
}
	printf("\n");
	return (0);
}
