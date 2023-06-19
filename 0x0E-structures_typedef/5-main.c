#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 *
 * Description: This function serves as the entry point of the program.
 * It creates a new dog, prints its name and age, and then frees the memory
 * allocated for the dog.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
