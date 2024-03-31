#include <stdio.h>
#include <stdlib.h>
/**
  *main -Entry point of the program
  *@argc: counts the arguments passed in the command line
  *@argv: stores the arguments in a pointer string
  *
  *Description: The program finds the multiplication of the passed argement
  *Return: 0 success
  */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc >= 3)
{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
}
	else
{
		printf("Error\n");
		return (1);
}
}
