#include <stdio.h>

/**
  *main -Entry point of our program
  *
  *Return: 0(success)
  */
int main(void)
{
	int i;
	long long first, second, next, sum;

	first = 1;
	second = 2;

	for (i = 1; ; i++)
{
		next = first + second;
		if (next <= 4000000)
{
			first = second;
			second = next;
}
			if (next % 2 == 0)
{
				sum += next;
}
		else
{
		break;
}
}
	printf("%lld\n", sum);
	return (0);
}
