#include <stdio.h>

/**
  *main -Entry point of our program
  *
  *Return: 0 success
  */
int main(void)
{
	int i = 0;

	if (i <= 99)
{
		for (i = 1; i <= 99; i++)
{
			if (i % 3 == 0 && i % 5 != 0)
{
				printf("Fizz ");
}
			else if (i % 5 == 0 && i % 3 != 0)
{
				printf("Buzz ");
}
			else if (i % 3 == 0 && i % 5 == 0)
{
				printf("FizzBuzz ");
}
			else
{
				printf("%d ", i);
}
}
}
	printf("Buzz");
	printf("\n");
	return (0);
}
