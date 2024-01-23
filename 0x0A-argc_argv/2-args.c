#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the command-line arguments
 *
 * Description: Prints all arguments received, including the program name.
 * Each argument is printed on a new line.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
		printf("%s\n", argv[i]);
}
	return (0);
}
