#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 *
 * Description: This function serves as the entry point of the program.
 * It creates a new struct dog, assigns values to its members, and then
 * uses printf to display the dog's name and age.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
