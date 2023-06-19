#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Struct dog to free
 *
 * Description: This function frees the memory allocated for a dog structure
 * and its associated name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
