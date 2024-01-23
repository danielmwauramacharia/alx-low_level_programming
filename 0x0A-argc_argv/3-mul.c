#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the command-line arguments
 *
 * Description: Prints the result of multiplying two numbers.
 * If  not two arguments, it prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
}
	else
{
		printf("Error\n");
		return (1);
}
}
