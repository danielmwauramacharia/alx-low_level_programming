#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main -Entry point of the code
  *
  *Return: 0 succcess
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (!(n == 0))
{
		if (n > 0)
			printf("%d is positive\n");
		if (n < 0)
			printf("%d is negative\n");
}
	else
{
	printf("%d is zero\n");
}
	return (0);
}