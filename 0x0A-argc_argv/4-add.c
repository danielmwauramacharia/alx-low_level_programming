#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main -Entry point of the program
  *@argc: counts the arguments passed
  *@argv: Stores the arguments in an array of string pointer
  *
  *Description: adds arguments if they are digits and return sum
  *Return: 0 success, 1 for fail
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
{
		for  (i = 1; i < argc; i++)
{
			for (j = 0; argv[i][j] != '\0'; j++)
{
				if (isdigit(argv[i][j]))
					continue;
				else
{
					printf("Error\n");
					return (1);
}
}
			sum = sum + atoi(argv[i]);
}
		printf("%d\n", sum);
}
	else
		printf("%d\n", 0);
	return (0);
}
