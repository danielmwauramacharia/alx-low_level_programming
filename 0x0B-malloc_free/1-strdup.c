#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *_strdup - Returns a pointer with a copy to the string
  *@str: The string to be copied
  *
  *Return: pointer to the str
  */
char *_strdup(char *str)
{
	int i = 0, count = 0, n = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
		count++;
	n = count + 1;
	ptr = ((char *)malloc(n * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
{
		*(ptr + i) = str[i];
}
	return (ptr);
}
