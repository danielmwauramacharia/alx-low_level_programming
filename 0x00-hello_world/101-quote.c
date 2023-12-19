#include <unistd.h>

/**
  *main - Entry point of our program
  *
  *Return: 1(success)
  */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, message, sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));

	return (1);

}
