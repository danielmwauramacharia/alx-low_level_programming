#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the command-line arguments
 *
 * Description: Prints the number of arguments passed to the program,
 * followed by a new line. The program name itself is counted as an argument.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
