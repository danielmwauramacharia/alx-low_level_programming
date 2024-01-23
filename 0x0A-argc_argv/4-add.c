#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Description: Adds positive numbers and prints the result
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int index, charIndex, result;

	result = 0;
	if (argc > 1)
{
		for (index = 1; index < argc; index++)
{
			for (charIndex = 0; argv[index][charIndex] != '\0'; charIndex++)
{
				if (argv[index][charIndex] >= '0' && argv[index][charIndex] <= '9')
{
					continue;
}
				else
{
					printf("Error\n");
					return (1);
}
}
			result += atoi(argv[index]);
}
			printf("%d\n", result);
}
    	else
{
		printf("0\n");
}
	return (0);
}
