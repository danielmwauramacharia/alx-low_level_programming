#include <stdio.h>
/**
  *main -Entry point of our program
  *@argc: Counts the command line arguments passed
  *@argv: Stores the arguments in a string array
  *
  *Description: The program prints all the arguments followed by new line
  *Return: 0 success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
