#include "main.h"
#include <stdlib.h>
/**
  *str_concat - A function that concatenates two strings
  *@s1: The first string
  *@s2: The second string
  *
  *Return: A  pointer to the concatenated string or 0 otherwise
  */
char *str_concat(char *s1, char *s2)
{
	int count1 = 0, count2 = 0, size = 0;
	char *ptr, *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	size = count1 + count2 + 1;
	ptr = ((char *)malloc(size * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (*s1 != '\0')
{
		*temp = *s1;
		temp++;
		s1++;
}
	while (*s2 != '\0')
{
		*temp = *s2;
		temp++;
		s2++;
}
	*temp = '\0';
	return (ptr);
}
