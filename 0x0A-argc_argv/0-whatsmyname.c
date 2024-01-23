#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the command-line arguments
 *
 * Description: Prints the name of the program, followed by a new line.
 * If the program is renamed, it will still print the new name.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
