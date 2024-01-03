#include <stdio.h>

/**
  *main -Entry point of our program
  *
  *Return: 0(success)
  */
int main(void)
{
	long first = 1, second = 2, next, sum = 0;

	while (first <= 4000000)
{
		if (first % 2 == 0)
{
			sum += first;
}
		next = first + second;
		first = second;
		second = next;
}
	printf("%ld\n", sum);
	return (0);
}
