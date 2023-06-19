#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 *
 * Description: This function serves as the entry point of the program.
 * It creates a new struct dog, assigns values to its members, calls the
 * print_dog function to print its details, and then returns 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
