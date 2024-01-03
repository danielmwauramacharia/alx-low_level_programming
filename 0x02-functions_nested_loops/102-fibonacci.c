#include <stdio.h>

/**
  *main -entry point of our program
  *the program prints fibonacci number starting from 1and2
  *Return: 0 success
  */
int main(void)
{
	int i, n;
	long long int first, second, next;

	first = 1;
	second = 2;
	n = 50;

	printf("%lld, %lld, ", first , second);
	for (i = 3; i <= n; i++)
{
		next = first + second;
		printf("%lld, ", next);
		first = second;
		second = next;
}
	printf("\n");
	return (0);
}
