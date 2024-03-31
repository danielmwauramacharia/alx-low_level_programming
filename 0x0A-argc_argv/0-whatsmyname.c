#include <stdio.h>
/**
  *main -Entry point of our programme
  *@argc: Counts the number of arguments passed in the command line
  *@argv: Stores the the commands passed as strings
  *
  *Description: Prints the name of a program followed by a new line
  *The printed name changes if the programme is renamed without re compiling
  *
  *Return: 0 if success
  */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
