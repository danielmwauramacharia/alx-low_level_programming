#include <stdio.h>

/**
  *main -entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int i, n;
	long first, second, next;

	first = 1;
	second = 2;
	n = 50;
	printf("%ld, ", first);
	printf("%ld, ", second);
	for (i = 3; i <= n; i++)
{
		next = first + second;
		if (i < 50)
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
